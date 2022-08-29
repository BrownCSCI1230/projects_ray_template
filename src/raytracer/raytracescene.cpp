#include "raytracescene.h"
#include "utils/sceneparser.h"

RayTraceScene::RayTraceScene(int width, int height, const RenderData &metaData)
{

}

const int& RayTraceScene::width() const {
    // Optional TODO: implement the getter or make your own design
    throw std::runtime_error("not implemented");
}

const int& RayTraceScene::height() const {
    // Optional TODO: implement the getter or make your own design
    throw std::runtime_error("not implemented");
}

const SceneGlobalData& RayTraceScene::getGlobalData() const {
    // Optional TODO: implement the getter or make your own design
    throw std::runtime_error("not implemented");
}

const std::shared_ptr<Camera> RayTraceScene::getCamera() const {
    // Optional TODO: implement the getter or make your own design
    throw std::runtime_error("not implemented");
}
