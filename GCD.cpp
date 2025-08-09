#include <bits/stdc++.h>
using namespace std;
void GCD(int m,int n)
{
    int factor =1;
        for(int i=1;i<=min(n,m);i++)
        //the gcd of larger number cannot be more than the smaller number itself
        {
            if(n%i==0 && m%i==0) factor=i;
        }
    cout<<"THE GCD is "<<factor<<endl;;
}
//Euclidean Algorithm
void GCD1(int m,int n)  //O(log(min(a,b)))
{ 
    while(n!=0)
    {
        int temp = n;
        n = m%n;
        m = temp;
    }
    cout<<"The GCD is "<<m;
}
int main() {
      int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
      int n,m;
      cin>>n>>m;
      GCD1(n,m);
    }
    return 0;
}