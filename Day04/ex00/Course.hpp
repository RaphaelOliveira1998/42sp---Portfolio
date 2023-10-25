#ifndef course_hpp
#include <vector>
#include <iostream>

class Course
{
private:
	std::string _name;
	Professor* _responsable;
	std::vector<Student*> _students;
	int _numberOfClassToGraduate;
	int _maximumNumberOfStudent;
public:
	Course(std::string p_name);
	void assign(Professor* p_professor);
	void subscribe(Student* p_student);
	std::vector<Course*> CourseList;
};
#endif