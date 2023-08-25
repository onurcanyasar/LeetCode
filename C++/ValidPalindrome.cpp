#include <iostream>

bool isPalindrome(std::string s) { //125. Valid Palindrome

    int left_pointer = 0;
    int right_pointer = (int) s.size() - 1;

    while (left_pointer < right_pointer){

        if (!std::isalnum(s[left_pointer])){
            left_pointer++;
        }
        if (!std::isalnum(s[right_pointer])){
            right_pointer--;

        }

        if(std::tolower(s[left_pointer]) != std::tolower(s[right_pointer])) return false;

        left_pointer++;
        right_pointer--;
    }

    return true;


}