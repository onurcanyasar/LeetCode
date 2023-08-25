#include <iostream>
#include <vector>

std::vector<int> twoSum(std::vector<int>& numbers, int target) { //167. Two Sum II - Input Array Is Sorted
    int left_pointer = 0;
    int right_pointer = (int) numbers.size() - 1;

    while (numbers[left_pointer] + numbers[right_pointer] != target){
        int sum = numbers[left_pointer] + numbers[right_pointer];
        if (sum > target) right_pointer--;
        else if(sum < target) left_pointer++;
    }

    return {left_pointer + 1 , right_pointer + 1};
}