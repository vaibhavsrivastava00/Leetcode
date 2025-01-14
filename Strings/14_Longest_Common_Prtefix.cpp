class Solution {
public:
    bool check_equal(vector<char>& ch){
        for(int i = 0;i<ch.size()-1;i++){
            if(ch[i] != ch[i+1]){
                return false;
            }
        }
    return true;
    }
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) return "";
        string ans = "";
        string temp ="";
        vector<char> ch;
        for(int k = 0;k<strs[0].size();k++){
            ch.clear(); 
            for(int i = 0;i<strs.size();i++){
                temp = strs[i];
                ch.push_back(temp[k]);
            }
            if(check_equal(ch)){
                ans += temp[k];
            }
            else{
                break;
            }
        }
    return ans;
    }
};