#include<iostream>
#include<vector>
#include <algorithm>
#include <climits>

using namespace std;

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n= nums.size();
        int l=0;int r=n-1;
        int mid =0;
        if(r==0) return nums[0];
        if(nums[0]!=nums[1]) return nums[0];
        if(nums[r]!=nums[r-1]) return nums[r];
        while(l<=r){
            mid =l +(r-l)/2;
            if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1]) break;

            if ((mid -l)%2 ==0){
                if(nums[mid]==nums[mid+1]){
                    l=mid+2;
                }
                else{
                    r=mid-2;
                }
            }

            else {
                if(nums[mid]==nums[mid-1]){
                    l=mid+1;
                }

                else{
                    r=mid-1;
                }
            }
        }
        return nums[mid];
    }
};