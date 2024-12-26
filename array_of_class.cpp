#include<bits/stdc++.h>
using namespace std;
class Student{
    public:
    char name[100];
    int roll;
    int marks;
};

int main()
{
    int n;
    cin>>n;
   // int arr[n]; how to take array of class look at below
   Student arr[n+1]; // if index is start from 1 then need to increase arraym size by 1
   for(int i=1;i<=n;i++)
   {
    // cin>>arr[i];
    cin>>arr[i].name>>arr[i].marks;
    arr[i].roll=i;

   }
   for(int i=1;i<=n;i++)
   {
    cout<<arr[i].name<<" "<<arr[i].roll<<" "<<arr[i].marks<<endl;
   }
    
    return 0;
}
