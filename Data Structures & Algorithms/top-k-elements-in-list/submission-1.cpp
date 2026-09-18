class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int x:nums){
            mp[x]++;
        }
        vector<vector<int>>bucket(nums.size()+1);
        for(auto it:mp){
            int num=it.first;
            int f = it.second;
            bucket[f].push_back(num);
        }
        vector<int> ans;
        for (int freq=nums.size();freq>= 1;freq--) { 
            for (int num : bucket[freq]){
                ans.push_back(num); 
                if (ans.size() == k){
                    return ans;
                }
            } 
        }
        return ans;
    }
};
