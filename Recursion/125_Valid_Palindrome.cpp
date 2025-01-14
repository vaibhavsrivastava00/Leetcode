class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0;
        string temp = "";
        int len = s.size();
        while(len!=0){
            if(s[i]>='a' && s[i]<='z'||s[i]>='0' && s[i]<='9'){
                temp += s[i] ;
                i++;
                len--;               

            }
            else if(s[i]>='A' && s[i]<='Z'){
                s[i] = s[i] - 'A' + 'a';
                temp += s[i] ;
                i++;
                len--; 
                
            }
            else{
                i++;
            len--;     
                
            }
            
        }
        int st = 0;
        int e = temp.size() -1;
        while(st<=e){
            if(temp[st]!=temp[e]){
                return false;
            }
            st++;
            e--;
        }
    return true;
    }
};