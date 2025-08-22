--Given an array arr[] of positive integers which may contain duplicate elements, return the frequency of each distinct element.
class Solution {
  public:
    vector<vector<int>> countFreq(vector<int>& arr) {
        // code here
         unordered_map<int, int> freq;

        for (int x : arr) {
            freq[x]++;
        }

        vector<vector<int>> result;
        for (auto &p : freq) {
            result.push_back({p.first, p.second});
        }

        sort(result.begin(), result.end());

        return result;
        
    }
};
