class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> s;
        int ans = 0, a, b;
        string ch;

        for (int i = 0; i < operations.size(); i++) {
            ch = operations[i];

            if (ch == "C") {
                s.pop();
            } else if (ch == "D") {
                a = s.top();
                s.push(a * 2);
            } else if (ch == "+") {
                a = s.top(); s.pop();
                b = s.top();
                s.push(a);
                s.push(a + b);
            } else {
                s.push(stoi(ch));
            }
        }

        while (!s.empty()) {
            ans += s.top();
            s.pop();
        }

        return ans;
    }
};
