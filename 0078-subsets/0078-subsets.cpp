class Solution {
public:
    void recurSubset(vector<vector<int>>&ans, int index,vector<int>& nums,vector<int>& temp){
        if(index==nums.size()){
            ans.push_back(temp);
            return;
        }
        recurSubset(ans,index+1,nums,temp);
        temp.push_back(nums[index]);
        recurSubset(ans,index+1,nums,temp);
        temp.pop_back();
        
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        recurSubset(ans,0,nums,temp);
        return ans;

    }
};