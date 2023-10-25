#ifndef graph_hpp
#define graph_hpp

#include <vector>
#include "vector2.hpp"

class Graph {
public:
    Graph(int size);
    void addPoint(const Vector2& point);
    void printGraph() const;

private:
    int size;
    std::vector<Vector2> points;
};

#endif