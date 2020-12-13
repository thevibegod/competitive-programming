// https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/

// Given an integer number n, return the difference between the product of its digits and the sum of its digits.

class Solution {
public:
    int subtractProductAndSum(int n) {
        long long int sum = 0;
        long long int product = 1; 
        int n1 = n;
        while(n1>0){
            sum = sum + (n1%10);
            product = product * (n1%10);
            n1 = n1 /10;
        }
        return product-sum;
    }
};