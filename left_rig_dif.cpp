#include<iostream>
#include<vector>
#include <algorithm>
#include <climits>

using namespace std;

class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> pre;
        pre.push_back(0);
        vector<int> suf;
        suf.push_back(0);
        int n=nums.size();
        int sum=0;

        for(int i=1;i<n;i++){
            sum+=nums[i-1];
            pre.push_back(sum);
        }
        suf.push_back(0);int su=0;
        for(int i=n-2;i>=0;i--){
            su+=nums[i+1];
            suf.push_back(su);
        }
        reverse(suf.begin(),suf.end());
        vector<int> res;
        for(int k=0;k<n;k++){
            res.push_back(abs(suf[k]-pre[k]));
        }
        return res;
    }
};