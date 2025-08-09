#include <bits/stdc++.h>
using namespace std;

bool  isArmstrong(int n)
{
    int original = n,cube=0,remainder;
    while(n!=0)
    {
        remainder = n%10;
        cube +=pow(remainder,3);
        n/=10;
    }
    return (cube == original);
}
int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
      int n;
      cin>>n;
      if(isArmstrong(n))
              cout<<"The Number is Armstrong!"<<endl;
      else
              cout<<"The Number is not a Armstrong"<<endl;
     
    }
    return 0;
}