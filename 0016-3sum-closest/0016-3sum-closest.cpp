class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) 
    {
        /* vector<int> a;
        int n = nums.size()-1;
        for (int i=0;i<=n;i++)
        {
            for (int j=i+1;j<=n;j++)
            {
                for (int k=j+1;k<=n;k++)
                {
                    int h = nums[i]+nums[j]+nums[k];
                    a.push_back(h);
                }
            }
        }
        int r = abs(a[0]-target);
        int g=0;
        for(int i=0;i<a.size();i++)
        {
            if (abs(a[i]-target) < r) {
                r = abs(a[i]-target);
                g=i;
            }
        }
        return a[g]; */
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int best = nums[0]+nums[1]+nums[2];
        for (int i=0;i<n-2;i++)
        {
            int left = i+1;
            int right = n-1;
            while (left < right)
            {
                int sum = nums[i]+nums[left]+nums[right];
                if (abs(sum-target) < abs (best-target)) best = sum;
                if (sum == target) return sum;
                if (sum < target) left++;
                if (sum > target) right--;
            }
        }
        return best;
    }
};