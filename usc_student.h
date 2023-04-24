/*
PIC 10B 2B, Midterm Exam
Purpose: Student Datasets
Author: Arely Aguirre
Date: 11/02/2021
*/

#ifndef usc_student_h
#define usc_student_h
#include <iostream>
#include "student.h"

class Usc_Student : public Student
{
	public:
		Usc_Student(int n) : Student(n, "USC.txt")
		{
			scholarship = last;
		};
		void print_student_data();
		~Usc_Student() {};
	private:
		std::string scholarship;
};
#endif

