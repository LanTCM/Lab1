#ifndef STUDENT_H
#define STUDENT_H
#include <string>

using namespace std;

class Student
{
public:
	Student();
	~Student();
	void setName(string name_);
	void setId(string studId_);
	void setClass(string classes_);
	void setGrade(string grade_);
	void setSem(string semester_);

	string getName();
	string getId();
	string getClass();
	string getGrade();
	string getSem();

private:
	string name;
	string studId;
	string classes;
	string grade;
	string semester;
	string gpa;
};
#endif