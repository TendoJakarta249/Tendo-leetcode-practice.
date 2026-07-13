class Solution {
public:
    int rearrangeSticks(int n, int k) 
    {
     long long MOD = 1e9 + 7;   
     vector<vector<long long>> v(n+1,vector<long long> (k+1,0));
     v[0][0]=1;
     for (int i=1;i<=n;i++)
     {
        for (int j=1;j<=min(i,k);j++)
        {
            v[i][j] = (v[i-1][j-1]+ v[i-1][j]*(i-1)) % MOD;
        }
     }
     return v[n][k];
     }    
};