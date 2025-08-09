#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(int n)
{   n = abs(n);
    int N=n,rev_no=0,r;
    while(n!=0)
    {
        r = n%10;
        n/=10;
        rev_no = (rev_no*10)+r;
    }
    return(rev_no == N) ;
}
int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        if(isPalindrome(n)) 
           cout<<"The Number is Palindrome!"<<endl;
        else 
          cout<<"The Number is not a palindrome"<<endl;
    }
    return 0;
}