#include <iostream>
#include <vector>

class MinStack { //155. Min Stack
public:
    MinStack() {

    }

    void push(int val) {

        stack.push_back(val);
        if (min_stack.empty()) {
            min_stack.push_back(val);
        }
        else {

            int min = std::min(min_stack.back(), val);
            min_stack.push_back(min);
        }


    }

    void pop() {
        stack.pop_back();
        min_stack.pop_back();
    }

    int top() {
        return stack.back();
    }

    int getMin() {
        return min_stack.back();
    }
private:
    std::vector<int> stack;
    std::vector<int> min_stack;
};