

#include<iostream>
#include<vector>
#include <algorithm>
#include <climits>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int size=prices.size();
        int min=prices[0];
        int max=0;
        for(int i=1;i<size;i++){

            if(min>prices[i]) min=prices[i];
            else if(prices[i]-min>max){
                max=prices[i]-min;
            }
        }
        return max;
    }
};