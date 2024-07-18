#include <iostream>
#include <string>
using namespace std;

class Shape {//abstract class
    virtual void draw() = 0;//pure virtual functions
};

class Circle : public Shape {
    public:
        void draw(){
            cout<<"drawing a circle"<<endl;
        }
};
int main(){
    // Shape s1;  /cannot make object of abstract class
    Circle c1;
    c1.draw();
    return 0;
}