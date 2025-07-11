#include<bits/stdc++.h>
using namespace std;

int maxProduct(vector<int>&arr){
    int n=arr.size();
    int maxProd=arr[0];
    for(int i=0;i<n;i++){
        int mul=1;
        for(int j=i;j<n;j++){
            mul*=arr[j];
            maxProd=max(maxProd,mul);
        }
    }
    return maxProd;
}

int main(){
    vector<int> arr={-2,6,-3,-10,0,2};
    cout<<maxProduct(arr);
    return 0;
}