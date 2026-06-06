// Run Time taking more , need to find the optimal code

#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


class Solution {
public:
    int mx(vector<int> &nums ,int x,int y){
        int max=x;
        int v=nums.size();
        for(int i=y;i<v;i++){
            if(nums[i]>max) {
                max=nums[i];break;
            }
        }
        return max;
    }

    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        vector<int> res;
        vector<int> big ;
        for(int k=0;k<n2;k++){
            int max1=0;
            max1=mx(nums2,nums2[k],k+1);
            if(max1!=nums2[k]) big.push_back(max1);
            else big.push_back(-1);
        }

        for(int i=0;i<n1;i++){
            for(int j=0;j<n2;j++){
                if(nums1[i]==nums2[j]){
                   res.push_back(big[j]);
                }

            }
        }
        return res;
    }
};