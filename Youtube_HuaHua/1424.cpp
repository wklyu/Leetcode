//
//  1424.cpp
//  Leetcode
//
//  Created by WeikunLyu on 5/11/20.
//  Copyright © 2020 WeikunLyu. All rights reserved.
//

#include <algorithm>
#include <deque>
#include <functional>
#include <iostream>
#include <iterator>
#include <limits>
#include <list>
#include <map>
#include <math.h>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        vector<vector<int>> m;
        for(int i = 0; i < nums.size(); i++){
            for(int j = 0; j < nums[i].size(); j++){
                if(m.size() <= i + j) m.push_back({});
                m[i+j].push_back(nums[i][j]);
            }
        }
        vector<int> ans;
        for(int i = 0; i < m.size(); i++){
            ans.insert(end(ans), rbegin(m[i]), rend(m[i]));
        }
        return ans;
    }
    
};
