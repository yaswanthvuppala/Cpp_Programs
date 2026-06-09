#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;


class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int n=nums.size();
        auto min=min_element(nums.begin(),nums.end());
        int idx=distance(nums.begin(),min);
        int left=0;int right=idx-1;
        int mid=0;
 
        while(left<=right){
            mid=left+(right-left)/2;
            if(target==nums[mid]) return mid;
            else if(target>nums[mid]){
                left=mid+1;
            }
            else if(target<nums[mid]){
                right=mid-1;
            }
        }
     left=idx; right=n-1;
        mid=0;
 
        while(left<=right){
            mid=left+(right-left)/2;
            if(target==nums[mid]) return mid;
            else if(target>nums[mid]){
                left=mid+1;
            }
            else if(target<nums[mid]){
                right=mid-1;
            }
        }




        return -1;

    }

};