#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"enter the no. of elements";
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
      cin>>v[i];
    sort(v.begin(),v.end());  
      do
      {
         for(int i=0;i<n;i++)
         {
            cout<<v[i]<<" ";
         }
         cout<<"\n";
      } while (next_permutation(v.begin(), v.end()));
}
