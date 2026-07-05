class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> map;
        int size = nums.size();
        for(int i=0;i<size;i++){
            if(map[nums[i]]>=size/2) return nums[i];
            map[nums[i]]++;
        }
        return -1;
    }
};