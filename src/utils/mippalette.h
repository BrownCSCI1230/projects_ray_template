#ifndef MIPPALETTE_H
#define MIPPALETTE_H

#include <QColor>
#include <array>

inline const std::array<QColor, 20> mipPalette = {
    QColor(220, 50, 47),   // 0  red
    QColor(255, 140, 0),   // 1  orange
    QColor(235, 200, 0),   // 2  yellow
    QColor(90, 190, 50),   // 3  green
    QColor(0, 180, 180),   // 4  cyan
    QColor(40, 110, 220),  // 5  blue
    QColor(150, 80, 210),  // 6  violet
    QColor(220, 70, 180),  // 7  magenta
    QColor(255, 255, 255), // 8  white
    QColor(120, 120, 120), // 9  gray
    QColor(220, 50, 47),   // 10 red
    QColor(255, 140, 0),   // 11 orange
    QColor(235, 200, 0),   // 12 yellow
    QColor(90, 190, 50),   // 13 green
    QColor(0, 180, 180),   // 14 cyan
    QColor(40, 110, 220),  // 15 blue
    QColor(150, 80, 210),  // 16 violet
    QColor(220, 70, 180),  // 17 magenta
    QColor(255, 255, 255), // 18 white
    QColor(120, 120, 120), // 19 gray
};

#endif