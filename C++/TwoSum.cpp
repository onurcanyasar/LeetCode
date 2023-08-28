#include <vector>
#include <unordered_map>

std::vector<int> twoSum(std::vector<int> &nums, int target) { //1. Two Sum
    std::unordered_map<int, int> num_map;
    std::vector<int> result;
    
    for (int i = 0; i < nums.size(); i++) {
        int num = nums[i];
        int targetNum = target - num;
        if (num_map.count(targetNum) != 0 && num_map[num] != i) {
            result.push_back(num_map[targetNum]);
            result.push_back(i);
            break;
        }
        num_map[num] = i;

    }
    return result;
}