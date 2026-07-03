class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> map;
        vector<int> ans;

        for(int i=0;i<nums.size();i++){
            int comp=target-nums[i];
            if(map.find(nums[i])!=map.end()){
                ans.push_back(map[nums[i]]),
                ans.push_back(i);
            }
            map[comp]=i;
            
        
        }  
        return ans;              
    }
};
