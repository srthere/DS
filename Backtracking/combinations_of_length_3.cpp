#include<bits/stdc++.h>
using namespace std;
int n;
void combo(vector<int>&v,vector<int>&buffer,int start,int bufferind)
{
   if(bufferind==3)
   {
       for(int i=0;i<3;i++)
         cout<<buffer[i]<<" ";
        cout<<"\n";
      return;
   }
   if(start==n)
     return;
   for(int i=start;i<n;i++)
   {
      buffer[bufferind]=v[i];
      combo(v,buffer,i+1,bufferind+1);
   }
}
int main()
{
   cout<<"enter the no. of elements ";
   cin>>n;
   vector<int>v(n+1),buffer(4);
   for(int i=0;i<n;i++)
   {
      cin>>v[i];
   }
   cout<<"combinations of length 3 are:\n";
   combo(v,buffer,0,0);
}
