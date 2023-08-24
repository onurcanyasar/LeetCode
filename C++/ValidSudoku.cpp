#include <vector>
#include <unordered_map>
#include <set>
#include <map>

bool isValidSudoku(std::vector<std::vector<char>> &board) { //36. Valid Sudoku
    std::unordered_map<int, std::set<char>> rows;
    std::unordered_map<int, std::set<char>> cols;
    std::map<std::vector<int>, std::set<char>> squares;

    for (int r = 0; r < 9; ++r) {
        for (int c = 0; c < 9; ++c) {

            std::vector<int> squares_map_key = {r / 3, c / 3};

            char board_value = board[r][c];

            if (board_value == '.') continue;

            if (rows[r].count(board_value) || cols[c].count(board_value) || squares[squares_map_key].count(board_value)) {
                return false;
            }

            rows[r].insert(board_value);
            cols[c].insert(board_value);
            squares[squares_map_key].insert(board_value);

        }
    }

    return true;
}