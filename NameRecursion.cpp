#include <bits/stdc++.h>
using namespace std;
void Name(int i, int n, string a)
{
    if(i==n) return;
    cout<<a<<"\n";
    Name(i+1,n,a);
}
int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int j=0;   
        cin.ignore();
        string a;
        getline(cin,a);
       
       Name(0,n,a);

    }
}
//Time Complexity - O(n)
//Space Complexity - O(n) - Stack Space