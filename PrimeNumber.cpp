#include <bits/stdc++.h>
using namespace std;\

void prime(int n)// Brute force approach - O(n)
{    //prime number --> 2 factors and >1
     int counter = 0;
     for(int i=1;i<=n;i++)
     {
        if(n%i==0) counter++;
     }
     if(counter==2)cout<<"Prime";
     else cout<<"Not a Prime";
     cout<<endl;
}

void prime1(int n)//Optimal Approach - O(sqrt(n))
{
    int counter =0;
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0) counter++;
        if(n%i!=i) counter++;
    }
    if(counter==2)cout<<"Prime";
     else cout<<"Not a Prime";
     cout<<endl;
}
int main() {
     int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
      int n;
      cin>>n;
      prime(n);
    }
    return 0;
}