#ifndef _STUDENT_H
#define _STUDENT_H

#include <iostream>
#include <cstring>

using namespace std;

class Student
{
public :
	void Print(ostream& out);
	void InitValue(int _id, char* _name, float _gpa);
	void getValue(int& _id, char* _name, float& _gpa);
	char* getName();
	void operator = (Student stu);
	bool operator<(const Student &stu);
	bool operator<=(const Student &stu);
	bool operator==(const Student &stu);
private :
	int id;
	char name[30];
	float gpa;
};

void Swap(Student*& item1, Student*& item2);
void Print(ostream& out, Student stu[], int numelement);
void PrintByPointer(ostream& out, Student* values[], int numValues);
void SelectionSort(Student* values[], int numValues);

template<class ItemType>
int MinIndex(ItemType values[], int startIndex, int endIndex);
#endif