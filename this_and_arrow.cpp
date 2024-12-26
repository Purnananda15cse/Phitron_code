
//this is built in keywords in case of this keyword variable name can have same 
//this act as pointer mean it point a object like (kapil,narayan)of class 
#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll;
    int cls;
    double gpa;
    Student(int roll, int cls, double gpa) // this is a constructor is used to reduce lines o f code
    {
       this->roll=roll; //this is a pointer which point an object 
       this->cls=cls;// when we need to use same variable name inside
       // constructor then this keyword is used & its notation(*this).roll/this->roll
       this->gpa=gpa;  
    // (*this).roll=roll; 
    // (*this).cls=cls;
    // (*this).gpa=gpa;

    }
};
int main()
{
    Student kapil(3, 5, 5.0);
    Student Narayan(2, 3, 4.5);

    cout <<kapil.roll<<" "<<kapil.cls<<" "<<kapil.gpa<<endl;
    cout<<Narayan.roll<<" "<<Narayan.cls<<" "<<Narayan.gpa<<endl;
    return 0;
}
