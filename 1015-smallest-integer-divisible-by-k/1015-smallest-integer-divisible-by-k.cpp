class Solution {
public:
    int smallestRepunitDivByK(int k) 
    {
        int i = 0;
        for (int count = 1; count <= k; count++)
        {
            i = (i * 10 + 1) % k; // Find the minimun value
            if (i == 0) 
            {
                return count;
            }
        }
        return -1;
    }
};