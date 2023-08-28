#include <vector>
int trap(std::vector<int>& height) { //42. Trapping Rain Water
    int max_l = height[0];
    int max_r = height[height.size() - 1];
    int l = 0;
    int r = (int) height.size() - 1;
    int total_water = 0;
    int water_amount;
    while (l < r - 1){
        if (max_l <= max_r){
            l++;
            water_amount = std::min(max_l, max_r) - height[l];
            max_l = std::max(max_l, height[l]);
        }
        else {
            r--;
            water_amount = std::min(max_l, max_r) - height[r];
            max_r = std::max(max_r, height[r]);
        }


        water_amount = std::max(0, water_amount);
        total_water += water_amount;

    }
    return total_water;

}