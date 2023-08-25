#include <vector>

int maxArea(std::vector<int>& height) { //11. Container With Most Water
    int l_pointer = 0;
    int r_pointer = (int) height.size() - 1;
    int max_area = 0;
    int min_height;
    int distance;
    while (l_pointer < r_pointer){
        distance = r_pointer - l_pointer;
        if (height[l_pointer] < height[r_pointer]){
            min_height = height[l_pointer];
            l_pointer++;
        }
        else {
            min_height = height[r_pointer];
            r_pointer--;
        }
        max_area = std::max(max_area, distance * min_height);

    }


    return max_area;


}