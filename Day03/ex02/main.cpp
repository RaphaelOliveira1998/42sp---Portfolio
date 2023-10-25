#include <iostream>
#include "shape.hpp"
#include "rectangle.hpp"
#include "triangle.hpp"
#include "circle.hpp"

void printShapeInfo(const Shape& shape) {
    std::cout << "Área: " << shape.area() << std::endl;
    std::cout << "Perímetro: " << shape.perimeter() << std::endl;
}

int main() {
    Rectangle rectangle(3.0, 4.0);
    Triangle triangle(3.0, 4.0, 5.0);
    Circle circle(2.0);

    std::cout << "\nInformações do retângulo: " << std::endl;
    printShapeInfo(rectangle);

    std::cout << "\nInformações do triângulo: " << std::endl;
    printShapeInfo(triangle);

    std::cout << "\nInformações do círculo: " << std::endl;
    printShapeInfo(circle);


    return 0;
}