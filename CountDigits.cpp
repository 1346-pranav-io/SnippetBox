//Program to Count Digits present in a Number
#include <bits/stdc++.h>
using namespace std;


int count(int n)//Brute Force Approach
{   int counter=0;
    while(n!=0)
    {
       n/=10;
       counter++;
    }
    return counter;
}


int count1(int n)//Optimal Approach
{
    int count = (int)(log10(n)+1);
    return count;
}


int main() 
{
    int t; // t -testcase, n-input
    cin>>t;
    for(int i=0;i<t;i++)
    {
      int n;
      cin>>n;
      int digit = count1(n);//Change the function accordingly
      cout<<"The Number of digits in "<<n<< " is :"<<digit<<endl;     
    }
    return 0;
}