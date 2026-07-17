class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<int> a;
        for(int i=0; i<nums1.size(); i++)
        a.push_back(nums1[i]);
        for(int i=0; i<nums2.size(); i++)
        a.push_back(nums2[i]);
        sort(a.begin(), a.end());
        if (a.size()%2!=0)
        {
            int t = (a.size()/2);
            return a[t];
        }
        if (a.size()%2==0)
        {
            int r = a.size()/2;
            double k = (a[r]+a[r-1])/2.0;
            return k;
        }
        return 0;
    }
};