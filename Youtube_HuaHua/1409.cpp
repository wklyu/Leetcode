//
//  1409.cpp
//  Leetcode
//
//  Created by WeikunLyu on 5/11/20.
//  Copyright © 2020 WeikunLyu. All rights reserved.
//

#include <stdio.h>
class Solution {
public:
    vector<int> processQueries(vector<int>& queries, int m) {
        vector<int> p(m);
        iota(begin(p), end(p), 1);
        vector<int> ans;
        for(auto q : queries){
            for(int i = 0; i < m; i++){
                if(p[i] !=  q) continue;
                for(int j = i; j > 0; j--){
                    p[j] = p[j - 1];
                }
                p[0] = q;
                ans.push_back(i);
                break;
            }
        }
        return ans;
    }
};
