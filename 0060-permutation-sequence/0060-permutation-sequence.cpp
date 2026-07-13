class Solution {
public:
    string getPermutation(int n, int k) 
    {
     vector<int> Giaithua(n,1);
     for (int i=1;i<n;i++)
     {
        Giaithua[i]=Giaithua[i-1]*i;
     }
     vector<int> t;
     for (int i=1;i<=n;i++) t.push_back(i);
     k=k-1;
     string results = "";
     for (int i = n-1;i>=0;i--)
     {
        int index = k/Giaithua[i];
        results +=to_string(t[index]); //Xử lý quá hay!
        t.erase(t.begin()+index);
        k=k%Giaithua[i];
     }  
     return results; 
    }
};