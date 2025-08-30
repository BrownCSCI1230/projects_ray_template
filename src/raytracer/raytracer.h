#pragma once

#include <glm/glm.hpp>
#include "utils/ini_utils.h"
#include "utils/rgba.h"

#define RAY_TRACE_MAX_DEPTH 4
#define RAY_TRACE_DEFAULT_SPP 64

// A forward declaration for the RaytraceScene class

class RayTraceScene;

// A class representing a ray-tracer

class RayTracer
{
public:
    struct Config {
        bool enableShadow        = false;
        bool enableReflection    = false;
        bool enableRefraction    = false;
        bool enableTextureMap    = false;
        TextureFilterType textureFilterType = TextureFilterType::Nearest;
        bool enableParallelism   = false;
        bool enableSuperSample   = false;
        bool enableAcceleration  = false;
        bool enableDepthOfField  = false;
        int maxRecursiveDepth    = RAY_TRACE_MAX_DEPTH;
        int samplesPerPixel      = RAY_TRACE_DEFAULT_SPP;
        SuperSamplerPattern superSamplerPattern = SuperSamplerPattern::Grid;
        bool onlyRenderNormals   = false;
        bool enableMipMapping    = false;
    };

public:
    RayTracer(Config config);

    // Renders the scene synchronously.
    // The ray-tracer will render the scene and fill imageData in-place.
    // @param imageData The pointer to the imageData to be filled.
    // @param scene The scene to be rendered.
    void render(RGBA *imageData, const RayTraceScene &scene);

private:
    const Config m_config;
};

