class Twitter {
private:
    int time = 0; 
    unordered_map<int, vector<pair<int, int>>> twts; 
    unordered_map<int, unordered_set<int>> following; 

public:
    Twitter() {}
    
    void postTweet(int userId, int tweetId) {
        twts[userId].push_back({time++, tweetId});
    }
    
    vector<int> getNewsFeed(int userId) {
        vector<pair<int, int>> topTweets;
        
        int count = 0;
        for (int i = twts[userId].size() - 1; i >= 0 && count < 10; i--, count++) {
            topTweets.push_back(twts[userId][i]);
        }
        
        for (auto followeeId : following[userId]) {
            count = 0;
            for (int i = twts[followeeId].size() - 1; i >= 0 && count < 10; i--, count++) {
                topTweets.push_back(twts[followeeId][i]);
            }
        }
        
        sort(topTweets.begin(), topTweets.end(), [](auto& a, auto& b) {
            return a.first > b.first; 
        });
        
        vector<int> result;
        for (int i = 0; i < min((int)topTweets.size(), 10); i++) {
            result.push_back(topTweets[i].second);
        }
        
        return result;
    }
    
    void follow(int followerId, int followeeId) {
        following[followerId].insert(followeeId);
    }
    
    void unfollow(int followerId, int followeeId) {
        following[followerId].erase(followeeId); 
    }
};

/**
 * Your Twitter object will be instantiated and called as such:
 * Twitter* obj = new Twitter();
 * obj->postTweet(userId,tweetId);
 * vector<int> param_2 = obj->getNewsFeed(userId);
 * obj->follow(followerId,followeeId);
 * obj->unfollow(followerId,followeeId);
 */