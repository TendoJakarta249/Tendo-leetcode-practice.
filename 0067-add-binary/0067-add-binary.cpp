class Solution {
public:
    string addBinary(string a, string b) {
        string ans = "";
        int i = a.size() - 1;
        int j = b.size() - 1;
        int carry = 0;

        while (i >= 0 || j >= 0 || carry!=0) {
            int sum = carry;

            if (i >= 0) 
            {
                sum += a[i] - '0';
                i=i-1;
            }
            if (j >= 0) 
            {
                sum += b[j] - '0';
                j=j-1;
            }
            ans.push_back((sum % 2) + '0');
            carry = sum / 2;
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};

/* number to binary

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> a;
    while (n > 0)
    {
        int h = n % 2;
        n /= 2;
        a.push_back(h);
    }
    reverse(a.begin(), a.end());
    for (int i = 0;i < a.size();i++)
    {
        cout << a[i];
    }
} */

/* binary to number

#include <iostream>
#include <vector>
using namespace std;
int main()
{
	string s;
	cin >> s;
	int num = 0;
	for (int i = 0;i < s.size();i++)
	{
		num = num * 2 + (s[i] - '0');
	}
	cout << num;
} */