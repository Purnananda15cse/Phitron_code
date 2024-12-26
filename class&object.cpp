#include<bits/stdc++.h>
using namespace std;
class Car{
    public:
    char color[50];
    int speed;
    int weight;
};
int main()
{
    Car tesla;
    Car abc;
    cin>>tesla.color>>tesla.speed>>tesla.weight;
    cout<<tesla.color<<" "<<tesla.speed<<" "<<tesla.weight<<endl;
    
    return 0;
}
