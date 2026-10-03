class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> mp;
        map<char, int> mp2;
        for(int i = 0; i < s.length(); i++){
            mp[s[i]]++;
        }
        for(int i = 0; i < t.length(); i++){
            mp2[t[i]]++;
        }
        for(char i = 'a'; i <= 'z'; i++){
            

            if(mp[i] != mp2[i]) return false;
        }
        return true;
    }
};
