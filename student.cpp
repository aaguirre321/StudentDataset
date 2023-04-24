/*
PIC 10B 2B, Midterm Exam
Purpose: Student Datasets
Author: Arely Aguirre
Date: 11/02/2021
*/

#include "student.h"

Student::Student(int n, std::string name) : school_name(name)
{
	in_data.open(school_name);
	getline(in_data, data_names);
	for (int j = 0; j < n; j++)
	{
		set_data();
		//allows different lines of data to be read
	}
	if (in_data.fail())
	{
		in_data.clear();
	}
	in_data.seekg(std::ios::beg);
	in_data.close();
}

void Student::set_data()
{
	in_data >> first >> second >> third >> fourth >> fifth;
	if (third == "M" || third == "F")
	{
		student_name = first + " " + second;
		gender = third;
		birthday = fourth;
		last = fifth;

	}
	else
	{
		student_name = first + " " + second + " " + third;
		gender = fourth;
		birthday = fifth;
		in_data >> sixth;
		last = sixth;
	}
}
