#ifndef triangle_hpp
#include <iostream>

double customSqrt(double x) {
    if (x == 0.0) return 0.0;

    double guess = x;
    double epsilon = 1e-6;

    while (true) {
        double nextGuess = 0.5 * (guess + x / guess);
        if (nextGuess < 0) {
            nextGuess = -nextGuess;
        }
        if (nextGuess - guess < epsilon && guess - nextGuess < epsilon) {
            return nextGuess;
        }
        guess = nextGuess;
    }
}

class Triangle : public Shape {
private:
    double a, b, c;

public:
    Triangle(double sideA, double sideB, double sideC) : a(sideA), b(sideB), c(sideC) {}

    double area() const {
        double s = (a + b + c) / 2;
        return customSqrt(s*(s - a) * (s - b) * (s - c));
    }

    double perimeter() const {
        return a + b + c;
    }
};

#endif