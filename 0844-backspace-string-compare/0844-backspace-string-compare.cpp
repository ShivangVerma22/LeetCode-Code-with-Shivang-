class Solution {
public:
    bool backspaceCompare(string s, string t) {
    stack<char> a1, b1;
    int i = 0;

    while (i < s.length() || i < t.length()) {
        
        if (i < s.length()) {
            if (s[i] != '#')
                a1.push(s[i]);
            else if (!a1.empty())
                a1.pop();
        }

        if (i < t.length()) {
            if (t[i] != '#')
                b1.push(t[i]);
            else if (!b1.empty())
                b1.pop();
        }

        i++;
    }

    return a1 == b1;

        
    }
};