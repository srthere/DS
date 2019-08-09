#include<bits/stdc++.h>
using namespace std;
vector<vector<string>>ans;
void show(string str,vector<string>v)
{
    for(int i=1;i<=str.size();i++)
    {
        string pre=str.substr(0,i);
        string k=pre;
        reverse(pre.begin(),pre.end());
        if(pre==k)
        {
            v.push_back(pre);
            if(i==str.size())
            {
                  ans.push_back(v);
                  return;
              }
            show(str.substr(i,str.size()-i),v);
            v.pop_back();
        }
    }
}
int main()
{
    string str;
    cin>>str;
    vector<string>v;
    show(str,v);
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
          cout<<ans[i][j]<<" ";
        cout<<"\n";
    }
/*    map<pair<int,int>,int>mp;
    mp[{1,2}]++;
    mp.erase({1,2});
    if(mp.find({1,2})!=mp.end())
      cout<<"true";*/
}
