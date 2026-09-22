class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
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
