
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;

        // Count frequency of each element
        for (int num : nums) {
            freq[num]++;
        }

        // Max heap: {frequency, element}
        priority_queue<pair<int, int>> pq;

        for (auto& p : freq) {
            pq.push({p.second, p.first});
        }

        // Extract the k most frequent elements
        vector<int> ans;

        for (int i = 0; i < k; i++) {
            ans.push_back(pq.top().second);
            pq.pop();
        }

        return ans;
    }
};
