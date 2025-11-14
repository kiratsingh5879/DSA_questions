class Solution {
public:
    vector<vector<int>> rangeAddQueries(int n, vector<vector<int>>& queries) {
        vector<vector<int>>nums(n,vector<int>(n,0));
        for(auto &it : queries) {
            int x1 = it[0];
            int y1 = it[1];
            int x2 = it[2];
            int y2 = it[3];
            for(int i=x1;i<=x2;i++) {
                for(int j=y1;j<=y2;j++) {
                    nums[i][j]++;
                }
            }
        }
        return nums;
    }
};