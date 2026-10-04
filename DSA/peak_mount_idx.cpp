#include<iostream>
#include<vector>
#include <algorithm>
#include <climits>

using namespace std;


class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int l = 1;
        int r = n - 2;
        int mid = 0;
        while (l <= r) {
            mid = l + (r - l) / 2;
            if (arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1])
                break;

            else if (arr[mid] < arr[mid + 1] && arr[mid] > arr[mid - 1])
                l = mid + 1;
            else if (arr[mid] < arr[mid - 1] && arr[mid] > arr[mid + 1])
                r = mid - 1;
        }

        return mid;
    }
};

int main(){

}