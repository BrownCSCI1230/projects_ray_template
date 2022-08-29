#include <QCoreApplication>
#include <QCommandLineParser>
#include <QImage>
#include <QtCore>

#include <iostream>
#include "utils/sceneparser.h"
#include "raytracer/raytracer.h"
#include "raytracer/raytracescene.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    QCommandLineParser parser;
    parser.addHelpOption();
    parser.addPositionalArgument("config", "Path of the config file.");
    parser.process(a);

    auto positionalArgs = parser.positionalArguments();
    if (positionalArgs.size() != 1) {
        std::cerr << "not enough arguments for the ray tracer, please run with --help to see the manual" << std::endl;
        a.exit(1);
        return 1;
    }

    QSettings settings( positionalArgs[0], QSettings::IniFormat );
    QString iScenePath = settings.value("IO/scene").toString();
    QString oImagePath = settings.value("IO/output").toString();

    RenderData metaData;
    bool success = SceneParser::parse(iScenePath.toStdString(), metaData);

    if (!success) {
        std::cerr << "error loading scene: " << iScenePath.toStdString() << std::endl;
        a.exit(1);
        return 1;
    }

    int width = settings.value("Canvas/width").toInt();
    int height = settings.value("Canvas/height").toInt();


    RayTracer::Config rtConfig{};

    rtConfig.enableShadow = settings.value("Feature/shadows").toBool();
    rtConfig.enableReflection = settings.value("Feature/reflect").toBool();
    rtConfig.enableRefraction = settings.value("Feature/refract").toBool();
    rtConfig.enableTextureMap = settings.value("Feature/texture").toBool();
    rtConfig.enableTextureFilter = settings.value("Feature/texture-filter").toBool();

    rtConfig.enableParallelism = settings.value("Feature/parallel").toBool();
    rtConfig.enableSuperSample = settings.value("Feature/super-sample").toBool();
    rtConfig.enableAcceleration = settings.value("Feature/acceleration").toBool();
    rtConfig.enableDepthOfField = settings.value("Feature/depthoffield").toBool();

    RayTraceScene rtScene{ width, height, metaData };

    QImage image = QImage(width, height, QImage::Format_RGBX8888);
    image.fill(Qt::black);

    RGBA *data = reinterpret_cast<RGBA *>(image.bits());

    RayTracer raytracer{ rtConfig };

    raytracer.render(data, rtScene);

    success = image.save(oImagePath);
    if (!success) {
        image.save(oImagePath, "PNG");
    }

    if (success) {
        std::cout << "Save rendered image to " << oImagePath.toStdString() << std::endl;
    } else {
        std::cerr << "Error: failed to save image to " << oImagePath.toStdString() << std::endl;
    }
    a.exit();
    return 0;
}
