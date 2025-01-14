class Solution {
public:
    bool is_present(string h, string n) {
        int count = 0;
        for (int i = 0; i <= h.size() - n.size(); i++) {
            count = 0;
            for (int j = 0; j < n.size(); j++) {
                if (h[i + j] == n[j]) {
                    count++;
                } else {
                    break;
                }
            }
            if (count == n.size()) { return true; }
        }
        return false;
    }

    int get_occurence(string h, string n) {
        if (n.size() > h.size()) return -1;  // Early exit to avoid out-of-bounds access
        for (int i = 0; i <= h.size() - n.size(); i++) {
            bool found = true;
            for (int j = 0; j < n.size(); j++) {
                if (h[i + j] != n[j]) {
                    found = false;
                    break;
                }
            }
            if (found) { return i; }
        }
        return -1;
    }

    int strStr(string h, string n) {
        if (n.empty()) return 0;
        return get_occurence(h, n);
    }
};
