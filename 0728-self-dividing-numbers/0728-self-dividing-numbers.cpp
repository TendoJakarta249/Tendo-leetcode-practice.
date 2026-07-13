class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) 
    {
        vector<int> v;
        for (int i=left; i<= right; i++)
        {
            if (i==1) v.push_back(i);
            else
            {
                long long t=0, r=0;
                int h=i;
                while (h>1)
                {
                    int k = h%10;
                    t++;
                    if (k==0) break;
                    else
                    {
                        if (i%k==0) r++;
                        h=h/10;
                    }
                }
                if (t==r) v.push_back(i);
            }
        }
        return v;
    }
};