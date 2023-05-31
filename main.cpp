/*
  Main.cpp

   Created by Sebastian Lizarraga on 5/12/2023.
*/

#include "Roster.h"
using namespace std;
//using std::endl;

int main()
{
      //Printing out my information
    cout << "Course: C867 Scripting and Programming - Applications\n" << "Programming Language: C++\n" << "ID: MY ID \n" << "Name: Sebastian Lizarraga" << std::endl << std::endl;
    
   //long string to parse
    const string studentData[] =
        {"A1,John,Smith,John1989@gm ail.com,20,30,35,40,SECURITY", 
        "A2,Suzan,Erickson,Erickson_1990@gmailcom,19,50,30,40,NETWORK", 
        "A3,Jack,Napoli,The_lawyer99yahoo.com,19,20,40,33,SOFTWARE", 
        "A4,Erin,Black,Erin.black@comcast.net,22,50,58,40,SECURITY", 
        /* Added my personal information (Part A)*/
        "A5,Sebastian,Lizarraga,gymshark990@gmail.com,21,30,21,3,SOFTWARE"
        };
        
    const int studentDataTable = 5;//setting size of array
    Roster classRoster;//creates repo 
    /*Adds each student to roster*/
	for (int i = 0; i < DataTable; i++) classRoster.parse(studentData[i]);
	cout << "All students:" << std::endl;
	classRoster.printAll();
	cout << std::endl;


	/*Software Students printed out*/
	cout << "Software Students:" << std::endl;
	classRoster.printByDegreeType(DegreeType::SOFTWARE);
	cout << std::endl;

	/*Display invalid emails*/
	cout << "Invalid Emails:" << std::endl;
	classRoster.printInvalidEmails();
	cout << std::endl;

	/*Average number of days for course completion*/
	cout << "Average Days in Course:" << std::endl;
	for (int i = 0; i < DataTable; i++) {
		classRoster.printAverageDaysInCourse(classRoster.classRosterArray[i]->getstudentID());
	}
	cout << std::endl;

	/*remove student A3 and print remaining*/
	cout << "Removing student..." << std::endl;
	classRoster.remove("A3");
	cout << std::endl;

	/*Print error that student is not found*/
	cout << "Removing student..." << std::endl;
	classRoster.remove("A3");
	cout << std::endl;

	system("pause");
	return 0;
}

  