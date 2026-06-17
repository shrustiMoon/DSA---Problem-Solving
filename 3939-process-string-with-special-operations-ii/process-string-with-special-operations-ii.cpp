class Solution {
public:
    char processStr(string s, long long k) {
        int n = s.size();

        vector<long long> len(n + 1, 0);

        // Compute lengths after each operation
        for (int i = 0; i < n; i++) {
            char ch = s[i];

            if (ch >= 'a' && ch <= 'z') {
                len[i + 1] = len[i] + 1;
            }
            else if (ch == '*') {
                len[i + 1] = max(0LL, len[i] - 1);
            }
            else if (ch == '#') {
                len[i + 1] = min((long long)4e18, len[i] * 2);
            }
            else if (ch == '%') {
                len[i + 1] = len[i];
            }
        }

        if (k >= len[n]) return '.';

        // Work backwards
        for (int i = n - 1; i >= 0; i--) {
            char ch = s[i];

            if (ch >= 'a' && ch <= 'z') {
                if (k == len[i]) return ch;
            }
            else if (ch == '*') {
                // Length before '*' was len[i]
                // Length after '*' was len[i+1]
                // k remains unchanged
            }
            else if (ch == '#') {
                long long prevLen = len[i];
                if (k >= prevLen) k -= prevLen;
            }
            else if (ch == '%') {
                k = len[i] - 1 - k;
            }
        }

        return '.';
    }
};