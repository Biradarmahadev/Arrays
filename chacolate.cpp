#include<bits/stdc++.h>
using namespace std;

int findminDiff(vector<int>&arr, int m){
    int n=arr.size();
    sort(arr.begin(),arr.end());
    int minDiff=INT_MAX;
    for (int i = 0; i + m - 1 < n; i++) {
      	
      	// calculate difference of current window
        int diff = arr[i + m - 1] - arr[i];
      
      	// if current difference is smaller
      	// then update the minimum difference
        if (diff < minDiff)
        	minDiff = diff;
    }
    return minDiff;
}

int main(){
    vector<int>arr={7, 3, 2, 4, 9, 12, 56};
    int m=3;
    cout<<findminDiff(arr,m);
    return 0;
}