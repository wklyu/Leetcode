//
//  main.cpp
//  Tree
//
//  Created by WeikunLyu on 3/7/20.
//  Copyright © 2020 WeikunLyu. All rights reserved.
//

#include <iostream>


 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
    
 };
 
class Solution {
public:
    int distributeCoins(TreeNode* root) {
        int ans = 0;
        balance (root, ans);
        return ans;
    }
private:
    int balance(TreeNode* root, int& ans){
        if(!root) return 0;
        int l = balance(root->left, ans);
        int r = balance(root->right, ans);
        ans += abs(l) + abs(r);
        return l + r + root->val - 1;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
