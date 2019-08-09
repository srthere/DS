#include<bits/stdc++.h>
using namespace std;
int c,zero,k,endx,endy;
bool valid(int r,int m)
{
    return(r>=4 || m>=4);
}
bool isvalid(int r,int m,vector<vector<int>>&v)
{
    return (r>=0 && r<v.size() && m>=0 &&m<v[0].size() && v[r][m]==0);
}
bool calc(vector<vector<int>>&v,int r,int m,map<pair<int,int>,int>mp)
{

    if(valid(r,m) || v[r][m]==1)
      return false;
    if(r==endx && m==endy )
    {
        k++;
        //cout<<k<<"\n";
        if(k==zero)
        {
            c++;
            k--;
            return true;
        }
        k--;
        return false;
  }
    mp[{r,m}]++;
    k++;
    if(isvalid(r+1,m,v) && mp.find({r+1,m})==mp.end())
    {
    //    cout<<r<<" "<<m<<"\n";
        calc(v,r+1,m,mp);

    }
    if(isvalid(r,m+1,v) && mp.find({r,m+1})==mp.end())
    {
    //    cout<<r<<" "<<m<<"\n";
        calc(v,r,m+1,mp);

    }
    if(isvalid(r-1,m,v) && mp.find({r-1,m})==mp.end())
    {
    //    cout<<r<<" "<<m<<"\n";
        calc(v,r-1,m,mp);

    }
    if(isvalid(r,m-1,v) && mp.find({r,m-1})==mp.end())
    {
    //    cout<<r<<" "<<m<<"\n";
        calc(v,r,m-1,mp);

    }
    k--;
    mp.erase({r,m});
    return false;
}
int main()
{
    cout<<"enter the rows and colums";
    int n,m;
    cin>>n>>m;
    c=0;
    zero=0;
    vector<vector<int>>v(n,vector<int>(m,0));
    map<pair<int,int>,int>mp;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
           cin>>v[i][j];
           if(v[i][j]==0)
             zero++;
       }
    }
    endx=1;
    endy=0;
    calc(v,0,1,mp);
    cout<<c;
}
