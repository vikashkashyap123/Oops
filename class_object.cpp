#include <iostream>
#include <string>
using namespace std;
class Teacher{
private:
    double salary;  //data hiding
public:
    //properties /attributes
    string name;
    string dept;
    string subject;

    //methods/member functions
    void changeDept(string newDept){
        dept=newDept;
    }
    //setter /function is used to set the private salary
    void setSalary(double s){
        salary = s;
    }
    //getter /function is used to get the private salary
    double getSalary(){
        return salary;
    }
};
int main(){
    Teacher t1;
    t1.name = "vikash";
    t1.subject = "c++";
    t1.dept = "IT";
    t1.setSalary(25000);
    cout<<t1.name<<endl;
    cout<<t1.getSalary();
    return 0;
}