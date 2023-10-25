#ifndef rectangle_hpp

class Rectangle : public Shape {
private: 
    double width, height;

public:
    Rectangle(double w, double h) : width(w), height(h) {}

    double area() const {
        return width * height;
    }
    double perimeter() const {
        return 2 * (width + height);
    }
};

#endif