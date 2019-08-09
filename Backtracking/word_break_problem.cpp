#include<bits/stdc++.h>
using namespace std;
map<string,int>mp={{"mobile",1},{"samsung",1},{"sam",1},{"sung",1},
                        {"man",1},{"mango",1}, {"icecream",1},{"and",1},
                        {"go",1},{"i",1},{"love",1},{"ice",1},{"cream",1}};
void show(string str,string k)
{
    for(int i=1;i<=str.size();i++)
    {
        string pre=str.substr(0,i);
        if(mp.find(pre)!=mp.end())
        {
            if(i==str.size())
            {
                  k+=pre;
                  k+=" ";
                  cout<<k<<"\n";
                  return;
              }
            show(str.substr(i,str.size()-i),k+pre+" ");
        }
    }
}
int main()
{
    string str;
    cin>>str;
    show(str,"");
/*    map<pair<int,int>,int>mp;
    mp[{1,2}]++;
    mp.erase({1,2});
    if(mp.find({1,2})!=mp.end())
      cout<<"true";*/
}
