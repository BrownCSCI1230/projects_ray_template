#pragma once

#include <cstdint>
#include <QString>
#include <QImage>
#include <iostream>

struct RGBA {
    std::uint8_t r;
    std::uint8_t g;
    std::uint8_t b;
    std::uint8_t a = 255;
};

RGBA* loadTextureFromFile(const QString &file);
