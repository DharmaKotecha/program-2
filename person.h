// person class base class makes name for the person
// Author: Dharma Kotecha
// Date: 16/10/2022

#include <string>
using namespace std;

#ifndef PERSON_H
#define PERSON_H

class person
{
    public:
        person();
        virtual ~person();
        person (string name);
        string getName();

    protected:
        string mName;

    private:
};

#endif // PERSON_H
