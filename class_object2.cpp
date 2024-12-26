#include<bits/stdc++.h>
using namespace std;

class Learners{

    public:
    char name[100];
    int roll;
    double gpa;
    char sec;
};

int main()
{
    Learners kapil,joy;
    cin.getline(kapil.name,100);
    cin>>kapil.roll>>kapil.gpa>>kapil.sec;
    cin.ignore();
    cin.getline(joy.name,100);
    cin>>joy.roll>>joy.gpa>>joy.sec;
    


    cout<<kapil.name<<" "<<kapil.roll<<" "<<kapil.gpa<<" "<<kapil.sec<<endl;
    cout<<joy.name<<" "<<joy.roll<<" "<<joy.gpa<<" "<<joy.sec<<endl;


    
    return 0;
}
