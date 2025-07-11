#include<bits/stdc++.h>
using namespace std;
int maxSubarraySum(vector<int>&arr){
    int res=arr[0];
    for(int i=0; i<arr.size();i++){
        int currSum=0;
        for(int j=i;j<arr.size();j++){
            currSum=currSum+arr[j];
            res=max(res,currSum);

        }
    }
    return res;
}
int maxSub(vector<int>&arr){
    int res=arr[0];
    int maxEnding=arr[0];

    for(int i=1;i<arr.size();i++){
        maxEnding=max(arr[i],maxEnding+arr[i]);
        res=max(res,maxEnding);
    }
    return res;
}

int main(){
    vector<int>arr={2,3,-8,7,-1,2,3};
    cout<<maxSubarraySum(arr)<<endl;

    cout<<"second approach " <<maxSub(arr);
    return 0;
}
