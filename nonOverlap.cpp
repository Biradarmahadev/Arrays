#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> findGaps(vector<vector<int>> &arr) {
    if (arr.empty()) return {};
    
    // Sort intervals by start time
    sort(arr.begin(), arr.end());
    int processedEnd=arr[0][1];
    vector<vector<int>> res;
    for (int i = 1; i < arr.size(); i++) {
        
        if (processedEnd < arr[i][0]) {
            res.push_back({arr[i - 1][1], arr[i][0]});
        }
        processedEnd = max(processedEnd, arr[i][1]);
    }
    return res;
}

int main() {
    vector<vector<int>> arr = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
    
    for (auto &gap : findGaps(arr)) {
        cout << "[" << gap[0] << ", " << gap[1] << "] ";
    }
    return 0;
}