/* class Solution {
public:
    int countPrimes(int n) 
    {
        if (n <= 1) return 0;
        else
        {
            int r = 0;
            // Số nguyên tố bắt đầu từ 2
            for (int i = 2; i < n; i++)
            {
                int t = 0;
                // Chỉ chạy j đến căn bậc hai của i (j * j <= i) để tránh TLE
                for (int j = 1; j * j <= i; j++)
                {
                    if (i % j == 0) {
                        t++; // j là ước thứ nhất
                        
                        // Nếu j khác i/j thì i/j là ước thứ hai biệt lập
                        if (j * j != i) {
                            t++;
                        }
                    }
                }
                // Số nguyên tố là số có đúng 2 ước (1 và chính nó)
                if (t == 2) r++;
            }
            return r;
        }
    }
}; */

class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) return 0; // Số nguyên tố nhỏ nhất là 2, nên nếu n <= 2 thì không có số nào nhỏ hơn n

        // Mảng boolean đánh dấu, ban đầu coi tất cả từ 0 đến n-1 là số nguyên tố (true)
        vector<bool> isPrime(n, true);
        isPrime[0] = isPrime[1] = false; // 0 và 1 không phải số nguyên tố

        // Sàng lọc từ 2 cho đến căn bậc hai của n
        for (int i = 2; i * i < n; i++) {
            if (isPrime[i]) {
                // Gạch bỏ tất cả các bội số của i bắt đầu từ i*i
                for (int j = i * i; j < n; j += i) {
                    isPrime[j] = false;
                }
            }
        }

        // Đếm lại xem có bao nhiêu số còn giữ được nhãn true
        int count = 0;
        for (int i = 2; i < n; i++) {
            if (isPrime[i]) {
                count++;
            }
        }

        return count;
    }
};