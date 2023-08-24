#include <vector>
#include <string>
#include <map>

std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string> &strs) { //49. Group Anagrams

    std::map<std::vector<int>, std::vector<std::string>> anagram_group_map;

    for (const auto &str: strs) {

        std::vector<int> count;
        count.reserve(26);
        for (auto i = 0; i < 26; i++) count.push_back(0);

        for (auto ch: str) {
            int key = int(ch) - int('a');
            count[key] += 1;
        }

        anagram_group_map[count].push_back(str);
    }

    std::vector<std::vector<std::string>> result_groups;
    result_groups.reserve(anagram_group_map.size());

    for (const auto &pair: anagram_group_map) {
        result_groups.push_back(pair.second);
    }

    return result_groups;


}