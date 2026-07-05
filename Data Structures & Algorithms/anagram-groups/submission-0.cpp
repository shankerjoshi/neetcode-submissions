class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        set<string> sorts;
        unordered_map<string,vector<string>> map;

        for(const auto& str : strs){
            string ss = str;
            sort(ss.begin(),ss.end());
            // cout<<ss;
            // if(map.find(ss)!=map.end()){
            //     map[ss].push_back(str);
            //     sorts.push_back(ss);
            // }
            map[ss].push_back(str);
            sorts.insert(ss);
        }
        for(const auto& str : sorts){
            ans.push_back(map[str]);
        }

        return ans;

    }
};
