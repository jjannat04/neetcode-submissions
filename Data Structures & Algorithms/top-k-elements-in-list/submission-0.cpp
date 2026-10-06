class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }
        multimap<int, int, greater<int>> flippedMap;
        for (const auto& pair : mp) {
            flippedMap.insert({pair.second, pair.first});
        }
        vector<int> ans;
        int count = 0;
            for(auto& fMap : flippedMap){
                ans.push_back(fMap.second);
                count++;
                if(count == k) break;
            }
        return ans;
    }
};
