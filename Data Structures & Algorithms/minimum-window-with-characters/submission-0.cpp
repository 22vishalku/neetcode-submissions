class Solution {
public:
    bool find(string o, string p) {
        unordered_map<char, int> m;
        int b = 1;

        for (char i : p) {
            m[i]++;
        }

        for (char i : o) {
           m[i]--;
        }

        for (char i : p) {
            if (m[i] > 0) {
                b = 0;
            }
        }

        return b == 1 ? 1 : 0;
    }

    string minWindow(string s, string t) {
        string g = "";

        int m = s.size();
        int n = t.size();

        if (m < n)
            return "";
     

        int i = 0;
        int w = 0;
        int j = i + n + w;

        while (i < j && j <= m && (j - i) <= m) {

            if (find(s.substr(i, j - i), t)) {
                if (g == "" || (j - i) < g.size()) {
                    g = s.substr(i, j - i);
                }
            }

            i++;
            j++;

            if (j > m) {
                w++;
                i = 0;
                j = i + n + w;
            }
        }

        return g;
    }
};