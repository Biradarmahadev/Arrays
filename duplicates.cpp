#include<bits/stdc++.h>
using namespace std;
vector<int> FindDuplicates(vector<int>&arr){
    int n=arr.size();
    int max_val = *max_element(arr.begin(), arr.end());
    vector<int>freqM(max_val+1,0);
    vector<int>res;

    for(int i=0;i<n; i++){
        freqM[arr[i]]++;
    }

    for(int i=0;i<=max_val;i++){
        if(freqM[i]>1){
            res.push_back(i);
        }
    }

    if(res.empty()){
        res.push_back(-1);
    }

    return res;
}


vector<int> findDuplicates(vector<int>&arr){
    int n=arr.size();
    unordered_map<int,int>freqMap;
    vector<int>result;

    for(int i=0; i<n;i++){
        freqMap[arr[i]]++;
    }

    for(auto &entry:freqMap){
        if(entry.second>1){
            result.push_back(entry.first);
        }
    }
    if(result.empty()){
        result.push_back(-1);
    }
    return result;
}

int main(){
    vector<int> arr={1,2,1,2,3,3,4,5,6};
    
    cout << "Using findDuplicates(): ";
    vector<int> duplicate1 = findDuplicates(arr);
    for(int element : duplicate1){
        cout << element << " ";
    }
    cout << endl;

    cout << "Using FindDuplicates(): ";
    vector<int> duplicate2 = FindDuplicates(arr);
    for(int element : duplicate2){
        cout << element << " ";
    }
    cout << endl;

    return 0;
}
