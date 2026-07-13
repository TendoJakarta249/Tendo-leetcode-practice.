class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        else
        {
            long long sum=0;
            int k = x;
            while (x>0)
            {
                int t=x%10;
                x=x/10;
                sum=sum*10+t;
            }
            if (k == sum) return true;
            else return false;
        }
    }
};