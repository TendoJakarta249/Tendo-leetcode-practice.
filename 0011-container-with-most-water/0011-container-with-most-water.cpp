/* class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        int ans = 0;
        int n = height.size();

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                ans = max(ans, (j - i) * min(height[i], height[j]));
            }
        }

        return ans;
    }
}; */
class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int ans = 0;

        while (left < right) {
            ans = max(ans,
                      (right - left) * min(height[left], height[right]));

            if (height[left] < height[right])
                left++;
            else
                right--;
        }

        return ans;
    }
};