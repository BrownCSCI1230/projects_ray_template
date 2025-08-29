#include "ini_utils.h"

TextureFilterType IniUtils::textureFilterTypeFromString(const QString& str) {
    if (str == "nearest")
        return TextureFilterType::Nearest;
    else if (str == "bilinear")
        return TextureFilterType::Bilinear;
    else if (str == "trilinear")
        return TextureFilterType::Trilinear;
    else
        throw std::runtime_error("Invalid texture filter type string.");
}

SuperSamplerPattern IniUtils::superSamplerPatternFromString(const QString& str) {
    if (str == "grid")
        return SuperSamplerPattern::Grid;
    else if (str == "stratified")
        return SuperSamplerPattern::Stratified;
    else if (str == "random")
        return SuperSamplerPattern::Random;
    else
        throw std::runtime_error("Invalid supersampler pattern string.");
}
