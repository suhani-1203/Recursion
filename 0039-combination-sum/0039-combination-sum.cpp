class Solution {
public:
    vector<vector<int>> generateCombinations(int index,vector<int> &candidates,int target,vector<int> &current,vector<vector<int>> &ans){
        if(target<0 ||index==candidates.size()){
            return ans;
        }
        if(target==0){
            ans.push_back(current);
            return  ans;
        }
        if(candidates[index]>target)
            return ans;
        current.push_back(candidates[index]);
        target-=candidates[index];
        generateCombinations(index,candidates,target,current,ans);
        
        current.pop_back();
        target+=candidates[index];
        generateCombinations(index+1,candidates,target,current,ans);

        return ans;

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> ans;
        vector<int> current;
        generateCombinations(0,candidates,target,current,ans);
        return ans;

    }
};