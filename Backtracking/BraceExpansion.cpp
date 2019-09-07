#include<bits/stdc++.h>
#include <boost/algorithm/string.hpp>
using namespace std;

string expand(string str)
{
   int leftbrace=str.find('{');
   int rightbrace=str.find('}');
   if(leftbrace==-1 || rightbrace==-1)
   {
     return str;
   }
   string leftpart=str.substr(0,leftbrace),middlepart=str.substr(leftbrace+1,rightbrace-leftbrace-1);
   string rightpart=str.substr(rightbrace+1);
   vector<string> result;
   boost::split(result, middlepart, boost::is_any_of(","));
   for(auto itr:result)
      cout<<(expand(leftpart+itr+rightpart))<<"\n";
   return "";
}
int main()
{
    string str;
    cin>>str;
    expand(str);
}

