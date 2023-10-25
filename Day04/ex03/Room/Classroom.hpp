#include "Room.hpp"
#include "Course.hpp"

class Course;

class Classroom : public Room {
private:
    Course* _currentCourse;

public:
    Classroom(long long id, int capacity) : Room(id, capacity), _currentCourse(nullptr) {}

    void assignCourse(Course* p_course) {
        _currentCourse = p_course;
    }

    bool isAssignedToCourse() const {
        return _currentCourse != nullptr;
    }

    
};