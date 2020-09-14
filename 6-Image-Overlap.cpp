class Solution {
int overlap(vector<vector<int>>& A, vector<vector<int>>& B){
    int n = A.size(),count =0;
    for(int x=0; x<n; x++){
        for(int y=0; y<n; y++){
            int tmp = 0;
            for(int i=y; i<n; i++){
                for(int j=x; j<n ;j++)
                    if(A[i][j]==1 && B[i-y][j-x]==1) tmp++;
            }
            count = max(count,tmp);
        }
        
    }
    return count;
}
public:
    int largestOverlap(vector<vector<int>>& A, vector<vector<int>>& B) {
        return max(overlap(A,B),overlap(B,A));
    }
};