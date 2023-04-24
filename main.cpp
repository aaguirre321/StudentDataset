/*
PIC 10B 
Purpose: Student Datasets
Author: Arely Aguirre
Date: 11/02/2021
*/
#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "student.h"
#include "ucla_student.h"
#include "usc_student.h"
using namespace std;

int main()
{
	vector<Student*> students;
	string unused;
	ifstream ucla, usc;
	int lines1 = 0;
	int lines2 = 0;
	int a,i,j,k;
	bool empty;

	ucla.open("UCLA.txt");
	while (getline(ucla, unused))
	{
		empty = true;
		for ( a = 0; a < unused.length(); a++)
		{
			if (unused[a] != ' ')
			{
				empty = false;
			}
		}
		if(empty==false)
		{
			lines1++;
			//determines how many lines of text in UCLA file
		}
	}
	ucla.clear();
	ucla.seekg(ios::beg);
	ucla.close();
	for (i = 1; i < lines1; i++)
	// adds Ucla Students to a Student vector
	//starts at 1 so that category names aren't added to vector
	{
		students.push_back(new Ucla_Student(i));
	}

	usc.open("USC.txt");
	while (getline(usc, unused))
	{
		empty = true;
		for (a = 0; a < unused.length(); a++)
		{
			if (unused[a] != ' ')
			{
				empty = false;
			}
		}
		if (empty == false)
		{
			lines2++;
			//determines how many lines of text there are in USC file
		}
	}
	usc.clear();
	usc.seekg(ios::beg);
	usc.close();
	for (i = 1; i < lines2; i++)
	//adds USC students to Student vector
	//starts at 1 so that category names aren't added to vector
	{
		students.push_back(new Usc_Student(i));
	}
	cout << " Student_Name	Gender	Birthday	First_Gen_College_Student	Scholarship" << endl;
	for (j = 0; j < students.size(); j++)
	{
		students[j]->print_student_data();
		// prints both usc and ucla student data
		//knows the correct function to call bc print_student_data is a pure virtual func
	}
	
	for (k = 0; k < students.size(); k++)
	{
		delete students[k];
		// frees memory on heap
	}

	return 0;
}