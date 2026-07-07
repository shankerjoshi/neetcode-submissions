class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        return merge_sort(nums, 0, nums.size()-1);
    }

    vector<int> merge_sort(vector<int>& nums, int low, int up){
        if(low==up) return {nums[up]};
        int mid = low + (up-low)/2;
        vector<int> left = merge_sort(nums, low, mid);
        vector<int> right = merge_sort(nums, mid+1,up);

        return merge(left,right);
    }

    vector<int> merge(vector<int>& left, vector<int>& right){
        vector<int> merged(left.size()+right.size());
        int i=0,j=0,k=0;
        while(i<left.size() && j<right.size()){
            if(left[i]<=right[j]){
                merged[k]=left[i];
                i++;
                k++;
            }else{ // if(right[i]<left[i])
                merged[k]=right[j];
                j++;
                k++;
            }
            if(i>=left.size()){
                for(j=j,k=k;j<right.size();j++,k++){
                    merged[k] = right[j];
                }
            }else if(j>=right.size()){
                for(i=i,k=k;i<left.size();i++,k++){
                    merged[k] = left[i];
                }
            }
        }
        
        return merged;

    }
};