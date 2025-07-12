#include <bits/stdc++.h>
using namespace std;

// Function to merge overlapping intervals
vector<vector<int>> mergeOverlap(vector<vector<int>>& intervals) {

    // Sort intervals based on start values
    sort(intervals.begin(), intervals.end());
  
    vector<vector<int>> res;
  
    // Insert the first interval into the result
    res.push_back(intervals[0]);

    for (int i = 1; i < intervals.size(); i++) {
      
        // Find the last interval in the result
        vector<int>& last = res.back();
        vector<int>& curr = intervals[i];

        // If current interval overlaps with the last interval
        // in the result, merge them 
        if (curr[0] <= last[1]) 
            last[1] = max(last[1], curr[1]);
        else 
            res.push_back(curr);
    }

    return res;
}

vector<vector<int>> insertInterval(vector<vector<int>>& intervals, 
                                   		  vector<int> &newInterval) {
    intervals.push_back(newInterval);
  	return mergeOverlap(intervals);
}

int main() {
    vector<vector<int>> intervals = {{1, 3}, {4, 5}, {6, 7}, {8, 10}};
    vector<int> newInterval = {5, 6};
    
    vector<vector<int>> res = insertInterval(intervals, newInterval);
  	for (vector<int> interval: res) {
      	cout << interval[0] << " " << interval[1] << "\n";
    }
    return 0;
}