

class Solution {
public:
    int ways(int i, int j, int m, int n, vector<vector<int>>&v){
        if(i == m && j == n) return 1;
        else if( i > m || j >n) return 0;
        
        if(v[i][j] != -1) return v[i][j];
        int right= ways(i,j+1, m , n, v);
        int down = ways(i+1,j, m , n, v);

        v[i][j] = right + down;
        return v[i][j] ;
    }
    int uniquePaths(int m, int n) {
        int i =1; int j  = 1;
        vector<vector<int>> v(m+1, vector<int>(n +1, -1));
        return ways(i,j, m , n, v);
    }
};