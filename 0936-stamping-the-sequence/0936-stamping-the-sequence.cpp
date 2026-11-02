class Solution {
public:
    vector<int> movesToStamp(string stamp, string target) {
        int n = target.size();
        int m = stamp.size();

        vector<int> ans;
        vector<bool> visited(n, false);

        int stars = 0;

        while (stars < n) {
            bool changed = false;

            for (int i = 0; i <= n - m; i++) {
                if (visited[i])
                    continue;

                int j = 0;
                int count = 0;

                // Check whether this position can be stamped
                while (j < m) {
                    if (target[i + j] == '*') {
                        j++;
                    }
                    else if (target[i + j] == stamp[j]) {
                        count++;
                        j++;
                    }
                    else {
                        break;
                    }
                }

                if (j == m && count > 0) {
                    visited[i] = true;
                    ans.push_back(i);

                    // Replace matched characters with '*'
                    for (int k = 0; k < m; k++) {
                        if (target[i + k] != '*') {
                            target[i + k] = '*';
                            stars++;
                        }
                    }

                    changed = true;
                }
            }

            if (!changed)
                return {};
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};