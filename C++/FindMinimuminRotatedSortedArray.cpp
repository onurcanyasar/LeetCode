#include <vector>

int findMin(std::vector<int>& nums) { //153. Find Minimum in Rotated Sorted Array
    int res = nums[0];
    int l = 0;
    int r = (int) nums.size() - 1;
    int m;
    while (l <= r){
        if (nums[l] < nums[r]){
            return std::min(res, nums[l]);
        }

        m = (l + r) / 2;
        res = std::min(res, nums[m]);

        if (nums[m] >= nums[l]){
            l = m + 1;
        }
        else {
            r = m - 1;
        }

    }
    return res;

}