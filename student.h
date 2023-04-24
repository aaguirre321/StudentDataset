/*
PIC 10B 2B, Midterm Exam
Purpose: Student Datasets
Author: Arely Aguirre
Date: 11/02/2021
*/

#ifndef student_h
#define student_h
#include <fstream>
#include <string>
#include <vector>
#include <iostream>

class Student
{
public:
	Student(int n, std::string name);
	virtual void print_student_data() = 0;
	void set_data();
	virtual ~Student() {};

protected:
	std::string data_names;
	std::string first, second, third, fourth, fifth, sixth;
	std::string student_name,gender, birthday, last;
	std::string school_name;
	std::ifstream in_data;
};
#endif;

