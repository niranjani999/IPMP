class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<int> v;
        int top = 0, down = n-1, left = 0,right = m-1, dr = 0;
        while(top<=down && left<=right){
            if(dr==0){
                for(int i=left;i<=right;i++) {
                    v.push_back(matrix[top][i]);
                }
                top++;
            }
            else if(dr == 1){
                for(int i=top;i<=down;i++) {
                    v.push_back(matrix[i][right]);
                }
                right--;
            }
            else if(dr == 2){
                for(int i=right;i>=left;i--) {
                    v.push_back(matrix[down][i]);
                }
                down--;
            }
            else if(dr == 3){
                for(int i=down;i>=top;i--) {
                    v.push_back(matrix[i][left]);
                }
                left++;
            }
            dr = (dr+1)%4;
        }
        return v;
    }
};
