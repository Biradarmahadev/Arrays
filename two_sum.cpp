#include<bits/stdc++.h>
using namespace std;
//naive approach
bool twoSum(vector<int>&arr, int target){
    int n=arr.size();
    for(int i=0;i<n;i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]+arr[j]==target){
                return true;
            }
        }
    }
    return false;
}

//[Better Approach 1] Sorting and Binary Search - O(n*log(n)) time and O(1) space
bool binarySearch(vector<int>&arr, int left, int right, int target){
    while(target<=right){
        int mid=left+(right-left)/2;
        if(arr[mid]==target){
            return true;
            if(arr[mid]<target){
                left=mid+1;

            }else{
                right=mid-1;
            }
        }
    }
    return false;
}

bool Two_sum(vector<int>&arr, int target){
    sort(arr.begin(),arr.end());
    for(int i=0;i<arr.size();i++){
        int complement=target-arr[i];
        if(binarySearch(arr,i+1,arr.size()-1,complement))
        return true;
    }
    return false;
}
int main() {
  
    vector<int> arr = {0, -1, 2, -3, 1};
    int target = -2;

    if(Two_sum(arr, target))
      cout << "true";
    else
      cout << "false";

    return 0;
}