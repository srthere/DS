#include<bits/stdc++.h>
using namespace std;
int n,c;
void permut(vector<int>&v,vector<int>&buffer,int bufferind,vector<bool>&isbuff)
{
    if(bufferind==n)
    {
        for(int i=0;i<n;i++)
          cout<<buffer[i]<<" ";
        cout<<"\n";
      return;
  }
    for(int i=0;i<n;i++)
    {
        if(!isbuff[v[i]])
        {
            buffer[bufferind]=v[i];
            isbuff[v[i]]=true;
            permut(v,buffer,bufferind+1,isbuff);
            isbuff[v[i]]=false;
        }
    }
}
int main()
{
    cout<<"enter the no. of elements";
    cin>>n;
    vector<int>v(n+1),buffer(n+1);
    vector<bool>isbuff(n+1,false);
    for(int i=0;i<n;i++)
      cin>>v[i];
    permut(v,buffer,0,isbuff);
}
