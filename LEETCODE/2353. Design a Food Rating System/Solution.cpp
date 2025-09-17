class FoodRatings {
    unordered_map<string, string> fTC;
    unordered_map<string, int> fTR;
    unordered_map<string, set<pair<int, string>>> cTF;

public:
    FoodRatings(vector<string>& foods, vector<string>& cuisines, vector<int>& ratings) {
        for (int i = 0; i < foods.size(); ++i) {
            fTC[foods[i]] = cuisines[i];
            fTR[foods[i]] = ratings[i];
            cTF[cuisines[i]].insert({-ratings[i], foods[i]});
        }
    }
    
    void changeRating(string food, int newR) {
        string cuisine = fTC[food];
        int oldR = fTR[food];
        cTF[cuisine].erase({-oldR, food});
        cTF[cuisine].insert({-newR, food});
        fTR[food] = newR;
    }
    
    string highestRated(string cuisine) {
        return cTF[cuisine].begin()->second;
    }
};