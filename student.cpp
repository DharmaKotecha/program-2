// student class is a derived class that stores the classes taken
// Author: Dharma Kotecha
// Date: 16/10/2022

#include "student.h"

#include <string>
using namespace std;

student::student()
{
    mName = "";
    mTakeing = 0;
}

student::student (string name, string courses [], int size)
{
    mName = name;
    mTaking = size;
    for (int i = 0; i<size; i++)
    {
        mCourses [i] = courses [i];
    }
}

student::~student()
{

}

string Student::getCourses()
{
    string courses;
    for (int i=0; i<size; i++)
    {
        mCourses[i] = courses[i];
    }
}

student::student~()
{
    string courses;
    for (int i=0; i<mTaking; i++)
    {
        courses += mCourses[i] + "";
    }
    return courses;
}
