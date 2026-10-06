class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        for (auto i : strs) {
            string key = i;
            sort(key.begin(), key.end());
            mp[key].push_back(i);
        }
        vector<vector<string>> ans;
        ans.reserve(mp.size());
        for (auto& pair : mp) {
            ans.push_back(move(pair.second));
        }
        return ans;
    }
};
