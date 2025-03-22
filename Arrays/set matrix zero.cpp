class Solution {
    public:
        vector<vector<int>> setZeroes(vector<vector<int>>& v) {
            int n=v.size();
            int m=v[0].size();
            vector<int>col(m,0);
            vector<int>row(n,0);
            
            
            for (int i=0;i<n;++i) {
                for (int j=0;j<m;++j) {
                    if (v[i][j]==0) {
                        row[i]=1;
                        col[j]=1;
                    }
                }
            }
            
            
            for (int i=0;i<n;++i) {
                for (int j=0;j<m;++j) {
                    if (row[i]==1 || col[j]==1) {
                        v[i][j]=0;
                    }
                }
            }
            
            return v;
        }
    };