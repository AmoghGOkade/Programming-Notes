// to find how many nodes have value equal to the average value of their subtrees (subtree => left subtree, righ subtree and that node)

class Solution {
public:
    int ans=0;      //global variable accessible from inside the function
    pair<int, int> check_sum_num(TreeNode* curr)    //Used pair because I need both the sum and num of nodes in the subtree at every stage
    {
        // cout<<curr->val<<" "<<ans<<endl;
        pair<int, int> templ, tempr;
        int sum, num;
      
        if (curr->left)
        {
            templ = check_sum_num(curr->left);
        }
        if (curr->right)
        {
            tempr = check_sum_num(curr->right);
        }

        if (curr->left && curr->right)
        {
            sum = templ.first + tempr.first + curr->val;
            num = templ.second + tempr.second + 1;
        }
        else if (curr->left)
        {
            sum = templ.first + curr->val;
            num = templ.second + 1;
        }
        else if (curr->right)
        {
            sum = tempr.first + curr->val;
            num = tempr.second + 1;
        }
        else
        {
            sum = curr->val;
            num = 1;
        }

        if (sum/num == curr->val)
        {
            ans+=1;
            // cout<<curr->val<<", "<<ans<<endl;
        } 
        return make_pair(sum, num);
    }
    int averageOfSubtree(TreeNode* root) 
    {
        check_sum_num(root);
        return ans;
    }
};
