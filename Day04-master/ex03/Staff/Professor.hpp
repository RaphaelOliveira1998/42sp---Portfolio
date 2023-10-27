// Professor.hpp
#ifndef PROFESSOR_HPP
#define PROFESSOR_HPP

#include <string>
#include <vector>
#include "Staff.hpp"
#include "Course.hpp"
#include "Singleton.hpp"

class Course;

class Professor : public Staff {
private:
	Course* _currentCourse;

public:
	Professor(const std::string& name, int professorID) : Staff(name, professorID) {}
	void assignCourse(Course* p_course);
	Course* getCurrentCourse();
	void doClass();
	void closeCourse();
	int professorID;
};


class ProfessorList : public Singleton<ProfessorList> {
public:
	static std::vector<Professor*> professors;
	static void addProfessor(Professor* professor);
	static void removeProfessor(int professorID);
	Professor* courseHasProf();
};
#endif
