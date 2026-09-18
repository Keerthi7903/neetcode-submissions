class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;
        for(int i=0;i<strs.size();i++){
            string val=strs[i];
            sort(strs[i].begin(),strs[i].end());
            mp[strs[i]].push_back(val);
        }
        vector<vector<string>> ans;
        for(auto x:mp){ 
            ans.push_back(x.second); 
        } 
        return ans;
    }
};
