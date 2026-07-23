
 class Solution {
public:
    string multiply(string num1, string num2) 
    {
        int n = num1.size();
        int m = num2.size();
        vector<int> ans(m+n,0);
        for (int i = n-1;i>=0;i--)
        {
            for (int j = m-1;j>=0;j--)
            {
                int multi = (num1[i]-'0')*(num2[j]-'0');
                int p1 = i+j;
                int p2= i+j+1;
                int sum = multi + ans[p2];
                ans[p2] = sum%10;
                ans[p1] += sum/10;
            }
        }
        string res;
        for (int i = 0; i< m+n; i++)
        {
            if (res.empty() && ans[i]==0) continue;
            else res += char(ans[i]+'0');
        }
        if (res.empty()) return "0";
        else return res;       
    }
};

/* for (...) {
    int value = ...;      // tính tổng hoặc tích
    value += carry;       // hoặc cộng giá trị đã có

    digit = value % BASE;
    carry = value / BASE;

    // lưu digit
    // truyền carry
} */