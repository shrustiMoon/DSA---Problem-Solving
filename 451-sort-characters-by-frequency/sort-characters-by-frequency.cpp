class Solution {
public:
    static bool comparator(pair<int, char> p1, pair<int, char> p2) {
        if (p1.first > p2.first) return true;
        if (p1.first < p2.first) return false;
        return p1.second < p2.second;
    }

    string frequencySort(string s) {
        pair<int, char> freq[128];

        // Initialize frequency array
        for (int i = 0; i < 128; i++) {
            freq[i] = {0, (char)i};
        }

        // Count frequency
        for (char ch : s) {
            freq[(int)ch].first++;
        }

        // Sort by frequency descending
        sort(freq, freq + 128, comparator);

        string ans = "";

        // Build answer
        for (int i = 0; i < 128; i++) {
            while (freq[i].first > 0) {
                ans += freq[i].second;
                freq[i].first--;
            }
        }

        return ans;
    }
};