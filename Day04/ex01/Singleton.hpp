#ifndef Singleton_hpp
#include <iostream>

template <typename T>
class Singleton {
public:
    static T& getInstance(){
        static T instance;
        return instance;
    }

protected:
    Singleton(){};
};
#endif