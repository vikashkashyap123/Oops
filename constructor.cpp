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
    //properties /attributes
    string name;
    string dept;
    string subject;
    //parametrized constructor
    Teacher(string name,string dept,string subject,double salary){
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
    }
    

    void getInfo(){
        cout<<"name: "<<name<<endl;
        cout<<"subject: "<<subject<<endl;
    }
};
int main(){
    //constructor call
    Teacher t1("vikash","IT","C++",25000);
    // t1.getInfo();
    // cout<<t1.dept<<endl;
    Teacher t2(t1);  //default copy constructor
    t2.getInfo();
    return 0;
}