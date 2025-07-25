#include<bits/stdc++.h>
using namespace std;

int maxWater(vector<int>& arr) {
    int res = 0;

    // For every element of the array
    for (int i = 1; i < arr.size() - 1; i++) {

        // Find the maximum element on its left
        int left = arr[i];
        for (int j = 0; j < i; j++)
            left = max(left, arr[j]);

        // Find the maximum element on its right
        int right = arr[i];
        for (int j = i + 1; j < arr.size(); j++)
            right = max(right, arr[j]);

        // Update the maximum water
        res += (min(left, right) - arr[i]);
    }

    return res;
}
int MaxWater(vector<int>&arr){
    int n=arr.size();
    vector<int> left(n);
    vector<int> right(n);
    int res=0;
    left[0]=arr[0];
    for(int i=1;i<n;i++)
    left[i]=max(left[i-1],arr[i]);
    right[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--)
    right[i]=max(right[i+1],arr[i]);
    for(int i=1;i<n-1;i++){
        int minof2=min(left[i],right[i]);
        res+=minof2-arr[i];
    }
    return res;
}
int main(){
    vector<int> arr={2,1,5,3,1,0,4};
    cout<<maxWater(arr)<<endl;

     cout<<MaxWater(arr)<<endl;
    return 0;
}