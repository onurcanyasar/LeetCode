#include <vector>

std::vector<int> productExceptSelf(std::vector<int> &nums) { //238. Product of Array Except Self
    std::vector<int> res(nums.size());

    int prefix = 1;

    for (int i = 0; i < nums.size(); ++i) {
        res[i] = prefix;
        prefix *= nums[i];
    }

    int postfix = 1;
    for (auto i = nums.size(); i > 0; --i) {
        res[i - 1] *= postfix;
        postfix *= nums[i - 1];
    }

    return res;


}