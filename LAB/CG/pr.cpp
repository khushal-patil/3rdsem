#include <iostream>
#include <cmath>
#include <graphics.h>

void drawEquilateralTriangle(int x, int y, int side) {
    // Calculate coordinates of equilateral triangle vertices
    int x1 = x;
    int y1 = y - static_cast<int>(sqrt(3) / 2 * side);
    
    int x2 = x - side / 2;
    int y2 = y + static_cast<int>(sqrt(3) / 2 * side / 2);
    
    int x3 = x + side / 2;
    int y3 = y + static_cast<int>(sqrt(3) / 2 * side / 2);

    // Draw the equilateral triangle
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x1, y1);
}

void drawRhombus(int x, int y, int diagonal1, int diagonal2) {
    // Calculate coordinates of rhombus vertices
    int x1 = x - diagonal1 / 2;
    int y1 = y;

    int x2 = x;
    int y2 = y - diagonal2 / 2;

    int x3 = x + diagonal1 / 2;
    int y3 = y;

    int x4 = x;
    int y4 = y + diagonal2 / 2;

    // Draw the rhombus
    line(x1, y1, x2, y2);
    line(x2, y2, x3, y3);
    line(x3, y3, x4, y4);
    line(x4, y4, x1, y1);
}

void translate(int &x, int &y, int dx, int dy) {
    x += dx;
    y += dy;
}

void scale(int &x, int &y, float sx, float sy) {
    x = static_cast<int>(x * sx);
    y = static_cast<int>(y * sy);
}

void rotate(int &x, int &y, float angle) {
    float radians = angle * (M_PI / 180.0);
    int newX = static_cast<int>(x * cos(radians) - y * sin(radians));
    int newY = static_cast<int>(x * sin(radians) + y * cos(radians));
    x = newX;
    y = newY;
}

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, NULL);

    // Original coordinates of the equilateral triangle
    int triangleX = 100;
    int triangleY = 200;
    int triangleSide = 100;

    // Original coordinates of the rhombus
    int rhombusX = 300;
    int rhombusY = 200;
    int diagonal1 = 120;
    int diagonal2 = 80;

    // Draw original shapes
    drawEquilateralTriangle(triangleX, triangleY, triangleSide);
   // drawRhombus(rhombusX, rhombusY, diagonal1, diagonal2);

    // Perform transformations
    translate(triangleX, triangleY, 50, 100);
   // scale(rhombusX, rhombusY, 1.5, 1.5);
    rotate(triangleX, triangleY, 45);

    // Draw transformed shapes
    drawEquilateralTriangle(triangleX, triangleY, triangleSide);
   // drawRhombus(rhombusX, rhombusY, diagonal1, diagonal2);

    getch();
    closegraph();
    return 0;
}
