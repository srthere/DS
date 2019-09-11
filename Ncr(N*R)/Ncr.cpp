#include<bits/stdc++.h>
#include <boost/algorithm/string.hpp>
using namespace std;

int main()
{
   int n,r;
   cin>>n>>r;
   vector<int>ans(n,0);
   ans[0]=1;
   for(int i=1;i<=n;i++)
   {
      for(int j=min(i,r);j>0;j--)
      {
         ans[j]+=ans[j-1];
      }
   }
   cout<<ans[r];
}

