class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        
        unordered_map<char,int> map_s, map_t;
        for(int i=0;i<s.length();i++){
            map_s[s[i]]++;
            map_t[t[i]]++;
        }
        if(map_s==map_t) return true;
        else return false;

    }
};
