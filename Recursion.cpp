#include <bits/stdc++.h>
using namespace std;
void print(int i , int n)
{   
    if(i==n) return;
    cout<<i<<"\t";
    print(i+1,n);
}

void Backtrack(int i, int n)
{ 
   if(i<1) return;
   Backtrack(i-1,n); 
   //prints from the lastest stack fuction to the last stack function
   cout<<i;

}
int main()
{    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        Backtrack(n,n);
    }
    return 0;
}