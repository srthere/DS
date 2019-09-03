#include<bits/stdc++.h>
using namespace std;
int n,tot_sum,mini;
void subset(vector<int>&v,int sum,int ind,int c)
{
    if(c==n/2)
    {
        mini=min(mini,tot_sum-(sum*2));
        return ;
    }
    for(int i=ind;i<n;i++)
    {
        subset(v,sum+v[i],i+1,c++);
    }
}
int main()
{
    mini=INT_MAX;
    cout<<"enter the no. of elements";
    cin>>n;
    tot_sum=0;
    vector<int>v(n);
    for(int i=0;i<n;i++)
       cin>>v[i],tot_sum+=v[i];
    subset(v,0,0,0);
    cout<<mini;   
}
