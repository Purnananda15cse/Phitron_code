#include <iostream>
using namespace std;
// ternary operator ? ...:
// if there is single statement inside the() if and else) then ternary operator can be used in short
// int main()
// {
//     int x;
//     cin >> x;
//     x % 2 == 0 ? cout << "even\n" : cout << "odd\n"<< endl;
//     return 0;
// }
int main()
{
    int a;
    cin >> a;
    a % 2 == 0 ? cout << "Even" : cout << "odd" << endl;
    return 0;
}