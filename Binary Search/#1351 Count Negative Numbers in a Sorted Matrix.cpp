//
//  Count Negative Numbers in a Sorted Matrix.cpp
//  Binary Search
//
//  Created by WeikunLyu on 3/2/20.
//  Copyright © 2020 WeikunLyu. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        size_t row = grid.size();
        size_t col = grid[0].size();
        int sum = 0;
        size_t r = 0;
        size_t c = col - 1;
        while (r < row) {
             if (c >= 0 && grid[r][c] < 0) {
               --c;
             }
             else {
                 sum += col - c - 1;
                 ++r;
                 c = col - 1;
             }
        }
        return sum;
    }
};

int main(int argc, const char * argv[]) {
    vector<vector<int>> grid =
    {{4, 3, 2, -1},{3, 2, 1, -1},{3, 2, -1, -2},{-1, -1, -2, -3}};
    Solution A;
    cout << A.countNegatives(grid) << endl;
    return 0;
}
