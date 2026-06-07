#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;





class Brute_Force {
public:
    int minStartValue(vector<int>& nums) {

        int n = nums.size();
        int neg = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] < 0)
                neg += nums[i];
        }
        if (neg == 0 && nums[0] >= 0)
            return 1;
        int p = neg * -1;
        int j = 0;

        for (j = 1; j <= p; j++) {
            bool check = false;
            int sum = j;
            for (int i = 0; i < n; i++) {
                sum += nums[i];
                if (sum < 1)
                    break;
                if (sum >= 1 && i == n - 1)
                    check = true;
            }
            if (check == true)
                break;
        }
        return j;
    }
};

class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int n=nums.size();
        int pre=0;
        int min=INT_MAX;
        for(int i =1;i<=n;i++){
            pre+=nums[i-1];
            if(min>pre) min=pre;

        }
        int res=0;
        if(min<0) {
            res =(min*-1) +1;
        }
        else return 1;

        return res;

       
    }
};