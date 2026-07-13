class Solution {
public:
    vector<int> closestPrimes(int left, int right) 
    {
       vector<int> v;
       vector<bool> Prime(right + 1, true);
        if (right >= 0) Prime[0] = false;
        if (right >= 1) Prime[1] = false;
        
        for (int i = 2; i * i <= right; i++) {
            if (Prime[i]) {
                for (int j = i * i; j <= right; j += i) {
                    Prime[j] = false;
                }
            }
        }
       for (int i=left; i<=right;i++)
       {
        if (Prime[i]) v.push_back(i);
       } 
       if (v.size() < 2) return {-1, -1};
       else
       {
        long long k = v[1]-v[0];
        int q=0;
        for (int i=0; i<v.size()-1;i++)
        {
          if (abs(v[i+1] - v[i]) < k) 
          {
            k = abs(v[i+1] - v[i]);
            q=i;
          }
        }
        return {v[q], v[q+1]};
       }
    }
};