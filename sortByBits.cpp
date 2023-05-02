// https://leetcode.com/problems/sort-integers-by-the-number-of-1-bits/
// 
class Solution {
    public: vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(), arr.end(), comparar);
        return arr;
    }

    static int cantBits(int n) {
        int count = 0;
        while (n != 0) {
            count += n & 1;
            n >>= 1;
        }
        return count;
    }
    static bool comparar(int a, int b) {
        int cantA = cantBits(a);
        int cantB = cantBits(b);
        if (cantA == cantB) {
            return a < b;
        }
        return cantA < cantB;
    }
};