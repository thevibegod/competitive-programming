// https://leetcode.com/problems/hamming-distance/

// The Hamming distance between two integers is the number of positions at which the corresponding bits are different.
// Given two integers x and y, calculate the Hamming distance.

class Solution {
public:
    int hammingDistance(int x, int y) {
       int value= x ^ y,count=0;
       while(value>0){
           int mod = value%2;
           if(mod==1){
               count++;
           }
           value=value/2;
       }
        return count;
    }
};