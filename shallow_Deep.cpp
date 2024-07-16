#include <iostream>
#include <string>
using namespace std;

class student {
public:
    string name;
    double* cgpaPtr;

    student(string name,double cgpa){
        this->name  =name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }    
    
    student(student &obj){
        this->name = obj.name;
        // this->cgpaPtr = obj.cgpaPtr;
        //deep concept
        cgpaPtr = new double;
        *cgpaPtr = *obj.cgpaPtr;
    }
    void getInfo(){
        cout<<"name : "<<name<<endl;
        cout<<"cgpa : "<<*cgpaPtr<<endl;
    }
};
int main(){
    student s1("rahul kumar",8.9);
    student s2(s1); //'neha'

    s1.getInfo();
    *(s2.cgpaPtr)=9.2;
    s1.getInfo();

    s2.name = "neha";
    s2.getInfo();
    
    return 0;
}