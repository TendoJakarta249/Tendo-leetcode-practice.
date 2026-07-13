class Solution {
public:
    int pivotInteger(int n) {
        double x;
        x=sqrt((n*n+n)/2);
        if (x==(int)x) return x;
        else return -1;
        
    }
};