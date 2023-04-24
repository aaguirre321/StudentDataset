/*
PIC 10B 2B, Midterm Exam
Purpose: Student Datasets
Author: Arely Aguirre
Date: 11/02/2021
*/

#ifndef ucla_student_h
#define ucla_student_h
#include <string>
#include <iostream>
#include "student.h"
class Ucla_Student : public Student
{
	public:
		Ucla_Student(int n) : Student(n, "UCLA.txt")
		{
			first_gen_student = last;
		};
		void print_student_data();
		~Ucla_Student() {};
	private:
		std::string first_gen_student;
};
#endif

