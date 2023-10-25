#include "Graph.hpp"
#include <iostream>

Graph::Graph(int size) : size(size) {}

void Graph::addPoint(const Vector2& point) {
    points.push_back(point);
}

void Graph::printGraph() const {
    for (int i = size - 1; i >= 0; --i) {
        std::cout << i << " ";
        for (int j = 0; j < size; ++j) {
            bool pointFound = false;
            for (size_t k = 0; k < points.size(); k++) {
                const Vector2& point = points[k];
                if (static_cast<int>(point.getX()) == j && static_cast<int>(point.getY()) == i) {
                    std::cout << "X ";
                    pointFound = true;
                    break;
                }
            }
            if (!pointFound) {
                std::cout << ". ";
            }
        }
        std::cout << std::endl;
    }
    std::cout << ". ";
    for (int j = 0; j < size; j++) {
        std::cout << j << " ";
    }
    std::cout << std::endl;
}





