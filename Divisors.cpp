#include <bits/stdc++.h>
using namespace std;
void Divisor(int n) // brute force approach 
{  cout<<"The Divisors of number "<<n<<" is : "<<endl;
    for(int i=1;i<=n;i++)
    {
        if(n%i==0) cout<<i<<endl;
    }
}

void Divisor2(int n) // optimal approach
{
    cout<<"The Divisors of number "<<n<<" is : "<<endl;
    vector<int> v;
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {   /* if n=36
             actual output without vector: 1 36 2 18 3 12 4 9 6
             Therefore store it in vector and sort it  
             */
            v.push_back(i);
            if((n/i)!=i) v.push_back(n/i);
        }
    }
    sort(v.begin(),v.end());
    for(int x:v) cout<<x<<" "<<endl;
}

int main() {
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
      int n;
      cin>>n;
      Divisor2(n);
    }
    return 0;
}