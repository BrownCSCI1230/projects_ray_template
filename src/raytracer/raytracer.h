#ifndef RAYTRACER_H
#define RAYTRACER_H

#include <glm/glm.hpp>
#include "utils/rgba.h"

#define RAY_TRACE_MAX_DEPTH 4

class RayTraceScene;

class RayTracer
{
public:
    struct Config {
        bool enableShadow = false;
        bool enableReflection = false;
        bool enableRefraction = false;
        bool enableTextureMap = false;
        bool enableTextureFilter = false;
        bool enableParallelism = false;
        bool enableSuperSample = false;
        bool enableAcceleration = false;
        bool enableDepthOfField = false;
    };

public:
    RayTracer(Config config);

    // Render the scene synchronously.
    // The ray tracer will render the scene and fill the imageData in place.
    // @param imageData The pointer to the imageData to be filled.
    // @param scene The scene containing necessary info for rendering.
    void render(RGBA *imageData, const RayTraceScene &scene);

private:
    Config m_config;
};

#endif // RAYTRACER_H
