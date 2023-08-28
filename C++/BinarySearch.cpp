#include <vector>

int search(std::vector<int>& nums, int target) { //704. Binary Search
    int left = 0;
    int right = (int) nums.size() - 1;
    int middle;

    while (left <= right){
        middle = (left + right) / 2;

        if (target == nums[middle]) return middle;

        if (target > nums[middle]){
            left = middle + 1;
        }
        else{
            right = middle - 1;
        }
    }

    return -1;

}
