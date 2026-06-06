#include<iostream>
#include<vector>
#include <algorithm>
#include <climits>

using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> pre;
        vector<int> suf ;
        pre.push_back(1);
        suf.push_back(1);


        for(int i=1;i<n;i++){
            

            

            pre.push_back(nums[i-1]*pre[i-1]);

        }
  int k=0;      
for(int i=n-2;i>=0;i--){
    
    suf.push_back(suf[k]*nums[i+1]);k++;
}

reverse(suf.begin(),suf.end());
vector<int> res;
for(int j=0;j<n;j++){
res.push_back(pre[j]*suf[j]);
}

return res;

    }
};

int main(){


}