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

class GradStudent : public Student {
public:
    string researchArea;
};

int main(){
    GradStudent s1;
    s1.name = "vikash";
    s1.age = 21;
    s1.researchArea = "physics";
    cout<<s1.name<<endl;
    cout<<s1.age<<endl;
    cout<<s1.researchArea<<endl;
    return 0;
}