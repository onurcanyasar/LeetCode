#include <vector>
#include <unordered_map>

std::vector<int> topKFrequent(std::vector<int> &nums, int k) { //347. Top K Frequent Elements
    std::vector<std::vector<int>> count_vector(nums.size() + 1);
    std::unordered_map<int, int> count_map(nums.size());

    for (const auto &num: nums) {
        count_map[num] += 1;
    }

    for (const auto &pair: count_map) {
        count_vector[pair.second].push_back(pair.first);
    }

    std::vector<int> res;
    res.reserve(k);

    for (auto it = count_vector.rbegin(); it != count_vector.rend(); it++) {
        for (const auto &el: *it) {
            res.push_back(el);
            if (res.size() == k) return res;

        }
    }

    return res;


}