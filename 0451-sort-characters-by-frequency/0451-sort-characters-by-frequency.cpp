class Solution {
public:
    string frequencySort(string s) {
        /*int n=s.size();
        map<int,int>mpp;
        for(int i=0;i<n;i++){
            mpp[s[i]]++;
        }
       set<int,greater<int>>st;
        for(auto it:mpp){
           st.insert(it.second);
        }
        string ans="";
        for(auto x:st){
            for(auto it:mpp){
                  if(it.second==x){
                    for(int k=0;k<x;k++){
                        ans+=it.first;
                    }
                }
            }
        }
        return ans;*/
        int n=s.size();
        map<char,int>mpp;
        for(char c:s){
            mpp[c]++;
        }
        priority_queue<pair<int,char>>pq;
        for(auto it:mpp){
            pq.push({it.second,it.first});
        }
        string ans="";
        while(!pq.empty()){
            auto top=pq.top();
            pq.pop();
            int count=top.first;
            char ch=top.second;
            while(count--){
                ans+=ch;
            }
        }
        return ans;
    }
};