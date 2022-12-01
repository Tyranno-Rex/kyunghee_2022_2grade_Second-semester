#ifndef _STUDENT_H
#define _STUDENT_H

#include <iostream>
using namespace std;

class Student
{
public :
	void Print(ostream& out);
	void InitValue(int _id, char* _name, float _gpa);
	void getValue(int& _id, char* _name, float& _gpa);
	char* getName();
	void operator = (Student stu);
	bool operator < (Student sut);
	bool operator > (Student sut);
private :
	int id;
	char name[30];
	float gpa;
};

bool Student::operator <(Student stu)
{
	if (id != stu.id)
		return id < stu.id;
	int res = strcmp(name, stu.name);
	if (res != 0)
	{
		if (res == 1)
			return false;
		else
			return true;
	}
	return gpa < stu.gpa;
}
bool Student::operator >(Student stu)
{
	if (id != stu.id)
		return id > stu.id;
	int res = strcmp(name, stu.name);
	if (res != 0)
	{
		if (res == 1)
			return true;
		else
			return false;
	}
	return gpa > stu.gpa;
}

void Swap(Student& item1, Student& item2);

void Print(ostream& out, Student stu[], int numelement);
void PrintByPointer(ostream& out, Student* values[], int numValues);

#endif