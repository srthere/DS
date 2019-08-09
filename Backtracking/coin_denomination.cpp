#include<bits/stdc++.h>
using namespace std;
int n;
void coin(vector<int>&v,vector<int>&buffer,int bufferind,int amt,int sum,int start)
{
    if(amt==sum)
    {
        for(int i=0;i<bufferind;i++)
           cout<<buffer[i]<<" ";
        cout<<"\n";
        return;
    }
    if(bufferind==amt || sum>amt)
     return;
    for(int i=start;i<n;i++)
    {
        if(sum+v[i]<=amt)
        {
            buffer[bufferind]=v[i];
            coin(v,buffer,bufferind+1,amt,sum+v[i],i);
        }
    }
}
int main()
{
    cout<<"enter no. of coins";
    cin>>n;
    int amt;
    cout<<"enter amount";
    cin>>amt;
    vector<int>v(n+1),buffer(amt+1);
    for(int i=0;i<n;i++)
       cin>>v[i];
    coin(v,buffer,0,amt,0,0);
}
