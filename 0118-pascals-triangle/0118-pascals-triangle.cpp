class Solution {
public:
    vector<vector<int>> generate(int numRows) 
    {
       vector<vector<int>> v;
       for (int i=0;i<numRows;i++)
       {
        vector<int> r;
        for (int j=0;j<=i;j++)
        {
            if (j==0 || j==i) r.push_back(1);
            else
            {
                int val = v[i-1][j-1]+v[i-1][j];
                r.push_back(val);
            }
        }
        v.push_back(r);
       }
        return v;
    }
};