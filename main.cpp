#include <iostream>
#include "Person.h"
#include "professor.h"
#include "student.h"

using namespace std;

int main()
{
    person human ("Dharma");
    cout << human.getName() << endl;

    string myCourses [] = {"Computer Science", "History", "Physics", "Psychology"};
    int numberOfElements = sizeof (myCourses) / sizeof (myCourses [0]);
    student pupil ("Alejandra", myCourses, numberOfElements);
    cout << pupil.getName() << "" << pupil.getCourses() << endl;

    professor teacher ("Yesica", "college");
    cout << teacher.getName() << teacher.getOffice() << endl;

    return 0;
}
