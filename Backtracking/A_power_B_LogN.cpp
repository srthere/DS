#include<bits/stdc++.h>
using namespace std;
//time complexity O(LogN)
int fin(int a,int b)
{
   if(b==0)
     return 1;
   int temp=fin(a,b/2);
   if(b%2==0)
   {
      return temp*temp;
   }
   else
     return a*temp*temp;
}
int main()
{
    cout<<"enter 2 nos.";
    int a,b;
    cin>>a>>b;
    cout<<fin(a,b);
}
