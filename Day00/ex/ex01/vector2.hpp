#pragma once

class Vector2 {
public:
    Vector2(float x = 0.0f, float y = 0.0f);
    float getX() const;
    float getY() const;
private:
    float x;
    float y;
};
