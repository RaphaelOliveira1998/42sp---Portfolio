#include <iostream>
#include "vector2.hpp"
#include "Graph.hpp"

int main() {
    int graphSize = 10;
    Graph graph(graphSize);

    graph.addPoint(Vector2(0.0, 0.0));
    graph.addPoint(Vector2(2.0, 2.0));
    graph.addPoint(Vector2(4.0, 2.0));
    graph.addPoint(Vector2(2.0, 4.0));

    graph.printGraph();

    return 0;
}