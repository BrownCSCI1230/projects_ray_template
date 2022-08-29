#ifndef RAYTRACESCENE_H
#define RAYTRACESCENE_H

#include <memory>
#include "utils/scenedata.h"
#include "utils/sceneparser.h"

class Camera;

class RayTraceScene
{
public:
    RayTraceScene(int width, int height, const RenderData &metaData);

    // Feel free to make your own design choices for RayTraceScene, the getters provided below are all optional TODOs, just for convenience.
    // You can either implement and use these getters, or make your own design.
    // If you decide to make your own design, feel free to delete these getters as TAs won't rely on them to grade your assignments.

    // The getter of the width of the scene
    const int& width() const;

    // The getter of the height of the scene
    const int& height() const;

    // The getter of the global data of the scene
    const SceneGlobalData& getGlobalData() const;

    // The getter of the camera instance of the scene
    const std::shared_ptr<Camera> getCamera() const;
};

#endif // RAYTRACESCENE_H
