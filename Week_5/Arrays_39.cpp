class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int m = mat.size(), n = mat[0].size(), r=0,c=0;
        vector<int> res;
        for(int i = 0; i < m+n-1; i++){ 
            if(i%2){ 
                for(int r = 0; r <= i && r < m; r++){
                    int c = i - r;
                    if(c < n) res.push_back(mat[r][c]);
                }        
            }else{ 
                for(int c = 0; c <= i && c < n ; c++){
                    int r = i - c;
                    if(r < m) res.push_back(mat[r][c]);
                }        
            }
        }
        return res;
    }
};
