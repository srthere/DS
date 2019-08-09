#include<bits/stdc++.h>
using namespace std;
int n;
void subset(vector<int>&v,vector<int>&buffer,int start,int bufferind)
{
    for(int i=0;i<bufferind;i++)
       cout<<buffer[i]<<" ";
    cout<<"\n";
    if(bufferind==n)
      return;
    if(start==n)
      return;
      for(int i=start;i<n;i++)
      {
          buffer[bufferind]=v[i];
          subset(v,buffer,i+1,bufferind+1);
      }
}
int main()
{
    //for printing lexicographically sort the array
    cout<<"enter the no. of elements";
    cin>>n;
    vector<int>v(n+1),buffer(n+1);
    for(int i=0;i<n;i++)
       cin>>v[i];
    subset(v,buffer,0,0);
}
