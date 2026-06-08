#include<iostream>
#include<vector>
#include <algorithm>
#include <climits>

using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int i=0;
        int j=n-1;
        int max=INT_MIN;
        while(i<j){
            int cur=nums[i]*nums[j];
            if(max<cur) max=cur;
            if(nums[i]<=nums[j]) i++;
            else j--;
        }
         i=0; j=n-1;

        while(i<j){
            if(max==nums[i]*nums[j]) break;
            if(nums[i]<=nums[j]) i++;
            else j--;    }    

        return (nums[i]-1)*(nums[j]-1);

    }
};