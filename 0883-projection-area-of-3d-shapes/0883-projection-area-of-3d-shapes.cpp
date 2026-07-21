class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) 
    {
        int n = grid.size();
        int xy=0; int yz=0; int zx=0;
        for (int i=0;i<n;i++)
        {
            for (int j=0;j<n;j++)
            {
                if (grid[i][j] >0) xy++;
            }
        }
        for (int i=0;i<n;i++)
        {
            int mx =0;
            for (int j=0;j<n;j++)
            {
                mx = max(mx, grid[i][j]);
            }
            yz=yz+mx;
        }
        for (int j=0;j<n;j++)
        {
            int my=0;
            for (int i=0;i<n;i++)
            {
                my = max(my, grid[i][j]);
            }
            zx = zx+my;
        }
        return xy+ yz+zx;
    }
};