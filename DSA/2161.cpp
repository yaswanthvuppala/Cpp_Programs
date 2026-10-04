#include<iostream>
#include<vector>
#include <algorithm>
#include <climits>

using namespace std;


class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n=nums.size();int count=0;
        for(int i=0;i<n;i++){
            if(nums[i]==pivot) {count++;
            nums.erase(nums.begin()+i);n--;i--;}
        }
 
        vector<int> res;
        while(count>=1){
            res.push_back(pivot);count--;
        }
        int k=0;
        for(int j=0;j<n;j++){
            if(nums[j]<pivot){
                res.insert(res.begin()+k,nums[j]);
                k+=1;
            }
            else if(nums[j]> pivot) res.push_back(nums[j]);

        }

        return res;
    }
};