class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;
        int n = s.size();
        for (char c : s)
            freq[c]++;

        vector<vector<char>> temp(n + 1);
        for (auto it : freq)
            temp[it.second].push_back(it.first);

        string ans = "";
        for (int i = n; i >= 1; i--)
            for (char c : temp[i])
                for (int j = 0; j < i; j++)
                    ans.push_back(c);

        return ans;
    }
};