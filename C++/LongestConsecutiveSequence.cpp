#include <iostream>
#include <vector>
#include <unordered_set>

int longestConsecutive(std::vector<int>& nums) { //128. Longest Consecutive Sequence

    if(nums.empty()) return 0;

    std::unordered_set<int> num_set (nums.begin(), nums.end());

    int longest_seq_size = 1;


    for(const auto& num : num_set){
        if (num_set.find(num - 1) == num_set.end()){
            int size = 1;
            while (num_set.find(num + size) != num_set.end()){
                size += 1;

            }

            longest_seq_size = std::max(longest_seq_size, size);

        }
    }

    return longest_seq_size;
}