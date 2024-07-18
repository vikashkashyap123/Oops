#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
    int age;
};

class Student : public Person {
public:
    int rollno;
};

class Teacher : public Person {
public:
    string subject;
};

int main(){
    Student s1;
    s1.name = "tony";
    cout<<s1.name<<endl;

    Teacher t1;
    t1.age = 21;
    cout<<t1.age<<endl; 

    return 0;
}

// last one is hybrid inheritance
//combination of all inheritance