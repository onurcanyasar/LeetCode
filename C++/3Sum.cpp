#include <iostream>
#include <vector>
#include <algorithm>

std::vector<std::vector<int>> threeSum(std::vector<int>& nums) { //15. 3Sum
    std::sort(nums.begin(), nums.end());
    std::vector<std::vector<int>> res;

    int target = 0;
    int l_pointer = 0;
    int r_pointer = (int) nums.size() - 1;

    for (int i = 0; i < nums.size(); ++i) {
        if(i > 0){
            if (nums[i] == nums[i - 1]){
                continue;
            }
        }
        target -= nums[i];
        l_pointer = i + 1;
        r_pointer = (int) nums.size() - 1;
        if (l_pointer >= r_pointer) break;
        while (l_pointer < r_pointer){
            int sum = nums[l_pointer] + nums[r_pointer];

            if(sum > target){
                r_pointer--;
            }
            else if(sum < target){
                l_pointer++;
            }
            else{
                res.push_back({nums[i], nums[l_pointer], nums[r_pointer]});
                l_pointer++;
                while (nums[l_pointer - 1] == nums[l_pointer] && l_pointer < r_pointer) {
                    l_pointer++;
                }
            }

        }
        target = 0;
    }
    return res;

}