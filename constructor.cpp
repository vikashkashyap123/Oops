#include <iostream>
#include<string>
using namespace std;
class Teacher{
private:
    double salary;
public:
    //non-parametrized constructor
    // Teacher(){
    //     dept = "IT";
    // }
    //parametrized constructor
    Teacher(string n,string d,string s,double sal){
        name = n;
        dept = d;
        subject = s;
        salary = sal;
    }
    //properties /attributes
    string name;
    string dept;
    string subject;

    void getInfo(){
        cout<<"name: "<<name<<endl;
        cout<<"subject: "<<subject<<endl;
    }
};
int main(){
    //constructor call
    Teacher t1("vikash","IT","C++",25000);
    t1.getInfo();
    // cout<<t1.dept<<endl;
    return 0;
}