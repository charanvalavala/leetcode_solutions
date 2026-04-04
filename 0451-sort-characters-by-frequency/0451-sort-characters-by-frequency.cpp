class Solution {
public:
    string frequencySort(string s) {
        map<char, int> mp;
        for (auto c : s)
            mp[c]++;

        vector<pair<int, char>> v;
        for (auto it : mp)
            v.push_back({it.second, it.first});

        sort(v.rbegin(), v.rend());

        string ans = "";
        for (auto it : v) {
            while (it.first-- > 0)
                ans.push_back(it.second);
        }
        return ans;
    }
};