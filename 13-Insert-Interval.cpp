class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> result;
        int n = intervals.size(),i =0;
        
        while(i<n && intervals[i][1] < newInterval[0]) result.push_back(intervals[i++]);
        
        vector<int> mI = newInterval; //merged interval
        while(i<n && intervals[i][0] <= newInterval[1] ){
            mI[0] = min(intervals[i][0],mI[0]);
            mI[1] = max(intervals[i++][1],mI[1]);
        }
        result.push_back(mI);
        
        while(i<n)
            result.push_back(intervals[i++]);
        return result;
    }
};