#include<bits/stdc++.h>
using namespace std;

int *p;
void fun()
{
  int *x=new int ; //dynamic variable ceation by new keywords
  *x=10;
  p=x; //why *x was not used over here(support) store the pointer x to pointer p
  cout<<"Fun->"<<*p<<endl;
  return ;

}
int main()
{
    fun();
    cout<<"Main->"<<*p<<endl;
    return 0;
}