#include <bits/stdc++.h>
using namespace std;
int ReverseOrder(int n)
{
    int rev_no=0,r;//r-remainder
    while(n!=0)
    {
       r = n%10;
       n/=10;
       rev_no = (rev_no*10)+r;
    }
    return rev_no;
}
int main() {
     int t;
     cin>>t;
     for(int i=0;i<t;i++)
     {
        int n ;
        cin>>n;
        int reverse = ReverseOrder(n);
        cout<<"The Reverse Order is : "<<reverse;
     }
    return 0;
}