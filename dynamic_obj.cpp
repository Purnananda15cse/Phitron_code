#include <bits/stdc++.h>
using namespace std;

class Car
{
public:
    char color[100];
    int speed;
    int weight;
};
int main()
{
    Car *abc = new Car();
    cin>>(*abc).color>>abc->speed>>abc->weight;
    cout<<abc->color<<" "<<abc->speed<<" "<<abc->weight<<endl;
    delete abc;
    return 0;
}
