class Solution {
public:
    string frequencySort(string s) {
        /*
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
        */
        unordered_map<char, int> freq;
        int n = s.size();
        for (char c : s)
            freq[c]++;
        priority_queue<pair<int, char>> pq;
        for (auto it : freq) {
            pq.push({it.second, it.first});
        }
        string ans = "";
        while (!pq.empty()) {
            auto top = pq.top();
            pq.pop();
            int count = top.first;
            int item = top.second;
            while (count-- > 0) {
                ans.push_back(top.second);
            }
        }
        return ans;
    }
};