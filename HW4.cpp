//Jacob Liou CS 1337

using namespace std;
#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Campus.h"
#include "Trash.h"
#include "Teacher.h"
#include <string>
#include <stdlib.h>

/*
Optionals:
-Included speak() function for Student
-Added a little extra spice if a student picks up a bomb
-Created new Teacher class
-Made adjustments to trash.txt
*/
int main()
{
   Dimension camp = {22, 10};
   Dimension build = {5, 4};
   Campus UTD(camp, build);


    Student John("John", "Cena", 69);
    Student Jane("Jane", "Eyre", 120);
    John.go_to_campus(UTD);
    Jane.go_to_campus(UTD);
    cout<<UTD;
    int counter = 0;
    while(!John.isProjGraded() && !Jane.isProjGraded())
    {
        John.move(UTD);
        Jane.move(UTD);
        if(counter <= 10)
        {
            cout<<UTD;
            cout<<"---------------------\n";
        }
        counter++;
    }
    Teacher ProfessorDinkleberry = Teacher();
    ProfessorDinkleberry.gradeProject(John);
    ProfessorDinkleberry.gradeProject(Jane);

    if(John.getGrade() == Jane.getGrade())
    {
        cout<<"A tie! Both students have a grade of: "<< Jane.getGrade();
        John.showProj();
        Jane.showProj();
    }
    else if(John.getGrade() < Jane.getGrade())
    {
        cout<<"Jane wins with a grade of: "<<Jane.getGrade();
        Jane.showProj();
    }
    else
    {
        cout<<"John wins with a grade of: "<<John.getGrade();
        John.showProj();
    }

}
