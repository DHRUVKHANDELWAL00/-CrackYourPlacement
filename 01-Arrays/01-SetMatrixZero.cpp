class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int>>ans=matrix;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]==0){
                    for(int k=0;k<n;k++){
                        ans[k][j]=0;
                    }
                    for(int k=0;k<m;k++){
                        ans[i][k]=0;
                    }
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                matrix[i][j]=ans[i][j];
            }
        }
        //This is using O(1) space but TC=O(N^3)
        // My 2nd approach was to use map and store row and column and then traverse again and check if row no col no matching in map then hcnage it to 0.
    }
};