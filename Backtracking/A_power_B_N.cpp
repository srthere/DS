#include<bits/stdc++.h>
using namespace std;
//time complexity O(N)
int fin(int a,int b)
{
   if(b==0)
     return 1;
   if(b%2==0)
   {
      return fin(a,b/2)*fin(a,b/2);
   }
   else
     return a*fin(a,b/2)*fin(a,b/2);
}
int main()
{
    cout<<"enter 2 nos.";
    int a,b;
    cin>>a>>b;
    cout<<fin(a,b);
}
