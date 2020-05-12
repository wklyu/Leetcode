//
//  main.cpp
//  Sort
//
//  Created by WeikunLyu on 3/7/20.
//  Copyright © 2020 WeikunLyu. All rights reserved.
//

#include <iostream>
#include <vector>
class Solution {
public:
    vector<int> pancakeSort(vector<int>& A) {
        int N = A.size();
        for (int i = 0; i < N; ++i)
            B[i] = i+1;
        Arrays.sort(B, (i, j) -> A[j-1] - A[i-1]);

        for (int i: B) {
            for (int f: ans)
                if (i <= f)
                    i = f+1 - i;
            ans.add(i);
            ans.add(N--);
        }

        return ans;
    }
};
int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
