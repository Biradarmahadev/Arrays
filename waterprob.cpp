#include <bits/stdc++.h>
using namespace std;

int maxWater(vector<int>& arr){
    int left = 0, right = arr.size() - 1;
    int res = 0;
    while(left < right){
        int water = min(arr[left], arr[right]) * (right - left);
        res = max(res, water);
        if(arr[left] < arr[right])
            left += 1;
        else
            right -= 1;
    }
    return res;
}

int MaxWater(vector<int>& arr){
    int n = arr.size();
    int res = 0;
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            int amount = min(arr[i], arr[j]) * (j - i);
            res = max(amount, res);
        }
    }
    return res;
}

int main(){
    vector<int> arr = {2,1,8,6,4,6,5,5};
    cout << "Two-pointer optimized: " << maxWater(arr) << endl;
    cout << "Brute force: " << MaxWater(arr) << endl;
    return 0;
}
