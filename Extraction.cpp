#include <bits/stdc++.h>
using namespace std;
int main() 
{   int n,r;
     cout<<"Extraction of Numbers:\n";
     cin>>n;
     // Text file(.txt) configured to take input and give output(terminal hidden)
     cout<<"Enter a Number:"<<n<<"\n";
     for(int i=0;n!=0;i++)
     {
        r = n%10;
        cout<<r;
        cout<<"\n";
        n/=10;
     }  
    return 0;
}
