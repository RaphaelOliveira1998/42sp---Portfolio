#ifndef statistic_hpp
#define statistic_hpp

struct Statistic {
    int level;
    int exp;

    Statistic() : level(0), exp(0) {}

    Statistic(int level, int exp) : level(level), exp(exp) {}
};

#endif