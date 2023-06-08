//stock buy and sale 1
#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    int mini=prices[0],ans=0,n=prices.size();
    for(int i=1;i<n;i++)
    {
        mini=min(mini,prices[i]);
        ans=max(ans,prices[i]-mini);
    }
    return ans;
    
}
