#pragma once

#include "utils/rgba.h"
#include <QString>
#include <QImage>
#include <iostream>

struct Image {
    RGBA* data;
    int width;
    int height;
};

Image* loadImageFromFile(std::string file);
