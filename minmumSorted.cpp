#include<bits/stdc++.h>
using namespace std;
int findMin(vector<int>&arr){
    int res=arr[0];
    for(int i=1;i<arr.size();i++){
        res=min(res,arr[i]);

    }
    return res;
}

int FindMin(vector<int>&arr){
     int lo = 0, hi = arr.size() - 1;

    while (lo < hi) {
      
        // The current subarray is already sorted, 
        // the minimum is at the low index
        if (arr[lo] < arr[hi])        
            return arr[lo];
           
        // We reach here when we have at least
        // two elements and the current subarray
        // is rotated
      
        int mid = (lo + hi) / 2;

        // The right half is not sorted. So 
        // the minimum element must be in the
        // right half.
        if (arr[mid] > arr[hi])
            lo = mid + 1;
      
        // The right half is sorted. Note that in 
        // this case, we do not change high to mid - 1
        // but keep it to mid. As the mid element
        // itself can be the smallest
        else
            hi = mid;
    }

    return arr[lo]; 

}
int main(){
    vector<int>arr={5,6,1,2,3,4,7};
    int n=arr.size();
    cout<<findMin(arr)<<endl;
    cout<<FindMin(arr)<<endl;
    return 0;
}