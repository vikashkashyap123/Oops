// #include <iostream>
// #include <string>
// using namespace std;

// class Person {
// public:
//     string name;
//     int age;

//     Person(){
//         cout<<"parent class constructor called first"<<endl;
//     }
//     ~Person(){
//         cout<<"parent class destructor called later"<<endl;
//     }
// };

// class Student : public Person {
// public:
//     int rollno;
    
//     Student(){
//         cout<<"child class constructor called second"<<endl;
//     }
//     ~Student(){
//         cout<<"child class destructor called first"<<endl;
//     }
//     void getInfo(){
//         cout<<"name : "<<name<<endl;
//         cout<<"age : "<<age<<endl;
//         cout<<"rollno : "<<rollno<<endl;
//     }
// };

// int main(){
//     Student s1;
//     s1.name = "rahul";
//     s1.age = 20;
//     s1.rollno = 123;

//     s1.getInfo();
//     return 0;
// }

//     when parametrized constructor made then

#include <iostream>
#include <string>
using namespace std;

//example of single inheritance
class Person {
public:
    string name;
    int age;

    Person(string name,int age){
        this->name = name;
        this->age = age;
    }
    
};

class Student : public Person {
public:
    int rollno;
    
    Student(string name,int age,int rollno) : Person(name,age){
        this->rollno = rollno;
    }
    
    void getInfo(){
        cout<<"name : "<<name<<endl;
        cout<<"age : "<<age<<endl;
        cout<<"rollno : "<<rollno<<endl;
    }
};

int main(){
    Student s1("rahul",20,123);
    
    s1.getInfo();
    return 0;
}