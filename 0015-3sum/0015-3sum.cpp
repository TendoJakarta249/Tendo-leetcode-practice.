/* class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        set<vector<int>> st;
        for (int i=0;i<nums.size();i++)
        {
            for (int j=i+1;j<nums.size();j++)
            {
                for (int k=j+1;k<nums.size();k++)
                {
                    if (nums[i]+nums[j]+nums[k] ==0)
                    {
                        vector<int> a = {nums[i], nums[j], nums[k]};
                        sort(a.begin(), a.end());
                        st.insert(a);
                    }
                }
            }
        }
        vector<vector<int>> ans(st.begin(), st.end());
        return ans;
    }
}; */
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        vector<vector<int>> ans;
        int n = nums.size();

        for (int i = 0; i < n - 2; i++) {

            // Bỏ qua phần tử trùng
            if (i > 0 && nums[i] == nums[i - 1])
                continue;

            int left = i + 1;
            int right = n - 1;

            while (left < right) {

                int sum = nums[i] + nums[left] + nums[right];

                if (sum == 0) {

                    ans.push_back({nums[i], nums[left], nums[right]});

                    left++;
                    right--;

                    // Bỏ qua phần tử trùng bên trái
                    while (left < right &&
                           nums[left] == nums[left - 1])
                        left++;

                    // Bỏ qua phần tử trùng bên phải
                    while (left < right &&
                           nums[right] == nums[right + 1])
                        right--;

                }
                else if (sum < 0) {
                    left++;
                }
                else {
                    right--;
                }
            }
        }

        return ans;
    }
};