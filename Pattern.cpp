#include <bits/stdc++.h>
using namespace std;
/*
  ****
  ****
  ****
  ****

*/
void pattern1(int n)                           
{
  for(int i=0;i<n;i++)
 {                   
   for(int j=0;j<n;j++)
   {
     cout<<"*";
   }
   cout<<"\n";
 }
}
/*
   *
   * * 
   * * *
   * * * * 
   * * * * *

*/
void pattern2(int n)
{
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<=i;j++)
    {
      cout<<"* ";
    }
    cout<<endl;
  }
}
/*
  1
  1 2
  1 2 3 
  1 2 3 4 
  1 2 3 4 5 
*/
void pattern3(int n) 
{
  for(int i=1;i<=n;i++)
  {
   for(int j=1;j<=i;j++)
   {
    cout<<" "<<j;
   }
   cout<<endl;
  }
}
/*
  1
  2 2 
  3 3 3 
  4 4 4 4 
  5 5 5 5 5 
*/
void pattern4(int n)
{
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=i;j++)
    {
      cout<<" "<<i;
    }
    cout<<endl;
  }
}
/*
  *****
  ****
  ***
  **
  *
*/
void pattern5(int n)
{
  for(int i=1;i<=n;i++)
  {
    for(int j=0;j<n-i+1;j++)
    { 
      cout<<"*";
    }
    cout<<endl;
  } 
}
/*
  12345
  1234
  123
  12
  1
 
*/
void pattern6(int n)
{
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=n-i+1;j++)
    { 
      cout<<j;
    }
    cout<<endl;
  } 
}
/*
     *     
    ***    
   *****   
  *******  
 ********* 
*/
void pattern7(int n)
{
  for(int i=0;i<n;i++)
  {
   for(int j=0;j<n-i-1;j++)
   {
        cout<<" ";
   }
   for(int j=0;j<2*i+1;j++)
   {
       cout<<"*";
   }
   for(int j=0;j<n-i-1;j++)
   {
       cout<<" ";
   }
  cout<<endl;
  }
}
/*
    ***********
     *********
      *******
       ***** 
        ***    
         * 
*/
void pattern8(int n)
{
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<i;j++)
    {
      cout<<" ";
    }
    for(int j=0;j<2*n-(2*i+1);j++)
    {
       cout<<"*";
    }
    for(int j=0;j<i;j++)
    {
       cout<<" ";
    }
    cout<<endl;
  }
}
/*
  *  
 ***
***** 
*****  
 ***
  * 
  Combine pattern 7 and pattern 8
*/
/*
     *
     **
     *** 
     ****
     *****
     ******  
     *****
     ****
     ***    
     **
     *
*/
void pattern9(int n)
{
  for(int i=1;i<=2*n-1;i++)
  {
     int stars = i;
     if(i>n) stars = 2*n-i;//when i>n i.e for 6>5
     for(int j=0;j<stars;j++)
     {
       cout<<"*";
     }
     cout<<endl;
  }

}
/*
1
01
101
0101
10101
010101   
*/
void pattern10(int n)
{  
  int start=1;
  for(int i=0;i<n;i++)
  {
    if(i%2==0) start =1;
    else start = 0;
    for(int j=0;j<=i;j++)
    {
      cout<<start;
      start = 1-start;
    }
    cout<<endl;
  }
}
/*
1    1
12  21
123321
*/
void pattern11(int n)
{
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=i;j++)
    {
      cout<<j;
    }
   for(int j=1;j<=2*n-(2*i);j++) //mc
   {
    cout<<" ";
   }
   for(int j=i;j>=1;j--)
   {
      cout<<j;
   }
    cout<<endl;
  }
}
/*
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 
*/
void pattern12(int n)
{
   int num=1;
 for(int i=1;i<=n;i++)
 {
   for(int j=1;j<=i;j++)
   {
    cout<<num<<" ";
    num++;
   }
  cout<<endl;
 }
}
/*
A
A B
A B C
A B C D 
A B C D E
*/
void pattern13(int n)//Alphabetic pattern(L)
{
  for(int i=0;i<n;i++)
  {
    for(char ch = 'A';ch<='A'+i;ch++)
    {
      cout<<ch<<" ";
    }
    cout<<endl;
  }
}
/*
  A B C D E
  A B C D
  A B C
  A B
  A
*/
void pattern14(int n)
{
  for(int i=1;i<=n;i++)
  {
    for(char ch='A';ch<='A'+n-i;ch++)
    {
      cout<<ch<<" ";
    }
    cout<<endl;
  }
}
/*
A
B B
C C C 
D D D D
E E E E E
*/
void pattern15(int n)
{ 
  for(int i=0;i<n;i++)
  {
    char ch = 'A'+i;
    for(int j=0;j<=i;j++)
    {
      cout<<ch;
    }
    cout<<endl;
  }
}
/*
      A
    A B A 
  A B C B A
A B C D C B A
*/
void pattern16(int n)
{
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n-i-1;j++)
    {
      cout<<" ";
    }
    for(char ch='A';ch<='A'+i;ch++)
    {
      cout<<ch;
    }
    for(char ch='A'+i-1;ch>='A';ch--)
    { 
        cout<<ch;
    }
    cout<<endl;
  }
}
/*
E 
D E 
C D E 
B C D E 
A B C D E 
*/
void pattern17(int n)
{
  for(int i=0;i<n;i++)
  { 
    for(char ch='E'-i;ch<='E';ch++)
    {
    cout<<ch;
    }
    cout<<endl;
  }
}
/*
************
*****  *****
****    ****
***      ***
**        **
*          *
*          *
**        **
***      ***
****    ****
*****  *****
************ 
*/
void pattern18(int n)
{
  for(int i=1;i<=n;i++)
  {
    for(int j=0;j<n-i+1;j++)
    {
      cout<<"*";
    }
    for(int j=0;j<2*i-2;j++)
    {
      cout<<" ";
    }
    for(int j=0;j<n-i+1;j++)
    {
      cout<<"*";
    }
    cout<<endl;
  }  
  for(int i=1;i<=n;i++)
  {
    for(int j=0;j<i;j++)
    {
      cout<<"*";
    }
    for(int j=0;j<2*n-(2*i);j++)
    {
      cout<<" ";
    }
    for(int j=0;j<i;j++)
    {
      cout<<"*";
    }
    cout<<endl;
  }
}
/*
*          *
**        **
***      ***
****    ****
*****  *****
************
*****  *****
****    ****
***      ***
**        **
*          *
*/
void pattern19(int n)
{
   for(int i=1;i<=2*n-1;i++)
   {
    if(i<=n)
    {
      for(int j=1;j<=i;j++)
      {
        cout<<"*";
      }
      for(int j=1;j<=2*n-(2*i);j++)
      {
        cout<<" ";
      }
      for(int j=1;j<=i;j++)
      {
        cout<<"*";
      }
    }
    else
    {
      for(int j=0;j<2*n-i;j++)
      {
        cout<<"*";
      }
      for(int j=0;j<2*i-(2*n);j++)
      {
        cout<<" ";
      }
       for(int j=0;j<2*n-i;j++)
      {
        cout<<"*";
      }
    }

    cout<<endl;
   }

}
/*
* * * *
*     *
*     *
* * * *
*/
void pattern20(int n)
{
  for(int i=0;i<n;i++)
  { 
    for(int j=0;j<n;j++)
    {
      if(i==0 || j==0 || i==n-1 || j==n-1)
      {
        cout<<"*";
      }
      else cout<<" ";
    }
    cout<<endl;
  }
}
int main() {
    int t; // for number of test cases
    cin>>t;
    for(int i=0;i<t;i++)
    {
      int n;
      cin>>n;
     pattern20(n);
    }
    return 0;
}
