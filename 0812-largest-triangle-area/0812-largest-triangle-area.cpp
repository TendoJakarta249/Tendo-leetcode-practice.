class Solution {
public:
    double area(vector<int>& A, vector<int>& B, vector<int>& C)
    {
        return abs(
            A[0] * (B[1] - C[1]) +
            B[0] * (C[1] - A[1]) +
            C[0] * (A[1] - B[1])
        ) / 2.0;
    }

    double largestTriangleArea(vector<vector<int>>& points) {

        int n = points.size();
        double ans = 0;

        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                for(int k=j+1;k<n;k++)
                {
                    ans = max(ans,
                              area(points[i],points[j],points[k]));
                }
            }
        }

        return ans;
    }
};

    /* int maxarea = 0;
    for (int i=0; i<points.length-2 ; i++){
        for (int j=i+1; j<points.length-1 ; j++){
            for (int k=j+1; k<points.length ; k++){
                int x1,y1,x2,y2;
                x1 = points[i][0] - points[j][0];
                y1 = points[i][1] - points[j][1];
                x2 = points[i][0] - points[k][0];
                y2 = points[i][1] - points[k][1];
                int area = x1*y2 - x2*y1; // rectangle area, triangle is half
                if (area < 0){
                    area = -area;
                if (area > maxarea){
                    maxarea = area;
                }
            }
        }
        return maxarea/2.0; // triangle area is half */