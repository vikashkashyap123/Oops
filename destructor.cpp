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

    //destructor
    ~student(){
        cout<<"Hi I delete everything\n";
        delete cgpaPtr;//memory leak
    }

    void getInfo(){
        cout<<"name : "<<name<<endl;
        cout<<"cgpa : "<<*cgpaPtr<<endl;
    }
};
int main(){
    student s1("rahul",8.0);
    s1.getInfo();
    return 0;
}