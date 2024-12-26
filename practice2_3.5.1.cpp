#include <bits/stdc++.h>
using namespace std;

class Criketer
{
public:
    int jersey_no;
    string country;
};
int main()
{
    Criketer *dhoni = new Criketer;
    cin >> dhoni->jersey_no >> dhoni->country;
    Criketer *kohli = new Criketer;
     *kohli = *dhoni;
    //  kohli->jersey_no = dhoni->jersey_no;
    //  kohli->country = dhoni->country;
    delete dhoni;
    cout << kohli->jersey_no << " " << kohli->country << endl;

    return 0;
}
