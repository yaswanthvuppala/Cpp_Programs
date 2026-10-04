#include<iostream>
#include<vector>
#include <algorithm>
#include <climits>

using namespace std;


class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        if(n==2 && nums[0]>nums[1]) return nums[1];
        if(nums[0]<nums[1] && nums[0]<nums[n-1]) return nums[0];
        int l=0;int r=n-1;

        int mid =0;
        while(l<=r){
            mid =l + (r-l)/2;
            if(mid < n-1 && nums[mid]> nums[mid+1] ) return nums[mid+1];
            if(mid>0 && nums[mid]<nums[mid-1]) return nums[mid];

            if(mid>0 && nums[mid]>nums[mid-1] ){

                if(nums[mid]<nums[r]){
                    r=mid-1;
                }
                else l=mid+1;

            }
        }

        return -1;
    }
};