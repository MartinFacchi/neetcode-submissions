class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        /*  BRUTE FORCE
        for (int i = 0; i<nums.size();i++){
            for (int j = 0; j<nums.size();j++){
                if (nums[i] + nums[j] == target && i != j){
                    return {i, j};
                }
            }
        }*/
        unordered_map<int,int> hash;
        
        for (int i = 0; i < nums.size(); i++){
            int complement = target - nums[i];
            
            unordered_map<int,int>::iterator index = hash.find(complement);
            if (index != hash.end()){
                return {index->second, i};
            }
            hash[nums[i]] = i;
        }

        return {};
    }
};
