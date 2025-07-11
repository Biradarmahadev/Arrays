#include<bits/stdc++.h>
using namespace std;
int maxProfit(vector<int> &prices){
    int minSoFar=prices[0];
    int res=0;
    for(int i=1; i<prices.size();i++){
        minSoFar = min(minSoFar, prices[i]);
        res=max(res,prices[i]-minSoFar);
    }
    return res;
}

int MaxProf(vector<int>&prices){
    int n=prices.size();
    int res=0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            res=max(res,prices[j]-prices[i]);
        }
    }
    return res;
}
int main(){
    vector<int> prices={7,10,1,3,6,9,2};
    cout<<maxProfit(prices)<<endl;
    cout<<MaxProf(prices)<<endl;
    return 0;
}