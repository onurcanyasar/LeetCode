#include <vector>
#include <algorithm>

int minEatingSpeed(std::vector<int>& piles, int h) { //875. Koko Eating Bananas
    int min = 1;
    int max = *std::max_element(piles.begin(), piles.end());
    int res = max;
    int eat_speed;
    int elapsed_hours = 0;
    int curr_hour;
    while (min <= max){
        eat_speed = (min + max) / 2;
        for (const auto& pile: piles) {
            if (eat_speed >= pile) curr_hour = 1;
            else curr_hour = pile % eat_speed == 0 ? pile / eat_speed : (pile / eat_speed) + 1;

            elapsed_hours += curr_hour;
            if (elapsed_hours > h) break;
        }

        if (elapsed_hours <= h){
            res = std::min(res, eat_speed);
            max = eat_speed - 1;

        }
        else{
            min = eat_speed + 1;
        }
        elapsed_hours = 0;
    }

    return res;

}