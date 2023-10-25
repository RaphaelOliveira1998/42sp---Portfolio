#include "Room.hpp"
#include "Course.hpp"

class Classroom : public Room {
private:
    Course* _currentCourse;
    std::string name;
    std::vector<Student*> students;
    int maxCapacity;

public:
    Classroom(const std::string& name, long long id, int capacity) : Room(id, capacity), _currentCourse(nullptr), name(name), maxCapacity(capacity) {}

    void assignCourse(Course* p_course) {
        _currentCourse = p_course;
    }

    bool isAssignedToCourse() const {
        return _currentCourse != nullptr;
    }

    const std::string& getName() const {
        return name;
    }

    int getMaxCapacity() const {
        return maxCapacity;
    }

    void addStudent(Student* p_student) {
        if (students.size() < getMaxCapacity()) {
            students.push_back(p_student);
        }
    }

    void removeStudent(Student* p_student) {
        for (auto it = students.begin(); it != students.end(); ++it) {
            if (*it == p_student) {
                students.erase(it);
                break;
            }
        }
    }

    const std::vector<Student*>& getStudents() const {
        return students;
    }
};
