//pascal triangle

#include <bits/stdc++.h>

vector<vector<long long int>> printPascal(int n) 
{
 if(n==1) return {{1}};
 if(n==2) return {{1},{1,1}};
 vector<vector<long long>> arr;
 arr.push_back({1});
 arr.push_back({1,1});
 vector<long long> pre={1,1};
 for(int i=3;i<=n;i++)
 {
   vector<long long> v;
   for(int j=0;j<i;j++)
   {
     if(j==0 || j==i-1) v.push_back(1);
     else v.push_back(pre[j-1]+pre[j]);
   }
   arr.push_back(v);
   pre=v;

 }
 return arr;
}
