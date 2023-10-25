#ifndef position_hpp
#define position_hpp

struct Position {
    int x;
    int y;
    int z;

    Position() : x(0), y(0), z(0) {}

    Position(int x, int y, int z) : x(x), y(y), z(z) {}
};

#endif

