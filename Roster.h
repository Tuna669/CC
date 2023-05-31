/*
  Roster.hpp


  Created by Sebastian Lizarraga on 5/12/2023.
*/
#pragma once
#include "Student.h"

#include <stdio.h>


class Roster
{
public:
    int lastIndex = -1;
    const static int studentDataTable = 5;
    Student* classRosterArray[studentDataTable]; //not decalred dynamically

    //parse method parses set of comma delimted strings and extracts data
    void parse(string row);
    //pulls student data and creates student object in roster
    void add(string sID,
             string sFName,
             string sLName,
             string sEmail,
             int sAge,
             int d1,
             int d2,
             int d3,
             DegreeType dt);
    //once student object created, can call functions on it
    void printAll();//calls print() for each book
    void printByDegreeType(DegreeType dt);//degree type passed in, print by degree type
    void printInvalidEmails();//print vy email
    void printAverageDays(string studentID);//prints average days used to complete each class
    void removeStudentByID(string studentID);//find student by ID and remove
    ~Roster();//destructor
    
};



