
#include <vector>
#include <unordered_set>

bool containsDuplicate(std::vector<int> &nums) { //217. Contains Duplicate
    std::unordered_set<int> num_set;

    for (int num: nums) {
        if (num_set.find(num) != num_set.end()) {
            return true;
        }
        num_set.insert(num);
    }
    return false;


}