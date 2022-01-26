#include "Student.h"
#include<iostream>

using namespace std;

Student::Student()
{
	name = "";
	studId = "";
	classes = "";
	grade = "";
	semester = "";
	gpa = "";
}

Student ::~Student()
{}

void Student::setName(string name_)
{
	name = name_;
}

void Student::setId(string studId_)
{
	studId = studId_;
}

void Student::setClass(string classess_)
{
	classes = classess_;
}

void Student::setGrade(string grade_)
{
	grade = grade_;
}

void Student::setSem(string semester_)
{
	semester = semester_;
}


string Student::getName()
{
	return name;
}

string Student::getId()
{
	return studId;
}


void grade()
{
	int grade = 0;
	for (int i = 0; i < 100; i++)
	{
		grade = rand() % 100 + 1;
		if (grade < 60)
		{
			cout << "F";
			break;
		}
		else
		{
			if (grade < 70)
			{
				cout << "D";
				break;
			}
			else
			{
				if (grade < 80)
				{
					cout << "C";
					break;
				}
				else
				{
					if (grade < 90)
					{
						cout << "B";
						break;

					}
					else
					{
						if (grade <= 100)
						{
							cout << "A";
							break;
						}
					}
				}
			}
		}
	}
}


void Sem()
{
	int semesters = 0;
	semesters = rand() % 2 + 1;
	cout << semesters << endl;
}

int main()
{
	srand(time(NULL));
	Student i;

	string SFN;
	string SLN;
	string SID;
	string C;

	cout << "Type First Name of Student: " << endl;
	cin >> SFN;
	cout << "Type Last Name of Student: " << endl;
	cin >> SLN;
	cout << "Input Student ID: " << endl;
	cin >> SID;
	cout << "Type a Class the Student is in: " << endl;
	cin >> C;
	i.setName(SFN + " " + SLN);
	i.setId(SID);
	cout << "\nStudent Name: " << i.getName() << endl;
	cout << "Student ID: " << i.getId() << endl;
	cout << "Classes: " << C << endl;
	cout << "Grade: ";
	grade();
	cout << endl;
	cout << "Semester: ";
	Sem();


	return 0;
}