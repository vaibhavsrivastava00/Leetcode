class Solution {
public:
    string addStrings(string num1, string num2) {
        int n = num1.size();
        int m = num2.size();
        int i = n-1;
        int j = m-1;
        int a,b,carry = 0,digit = 0,ans = 0;
        string new_ans,new_str;
        while(i>=0 && j>=0){
            a = num1[i--] - '0';
            b = num2[j--] - '0';
            ans = a+b+carry;
            digit = ans%10;
            carry = ans/10;
            new_ans = to_string(digit);
            
            new_str += new_ans;

        }
        while(i>=0){
            a = num1[i--] - '0';
            ans = a+carry;
            digit = ans%10;
            carry = ans/10;
            new_ans = to_string(digit);
            new_str += new_ans;
        }
        while(j>=0){
            b = num2[j--] - '0';
            ans = b+carry;
            digit = ans%10;
            carry = ans/10;
            new_ans = to_string(digit);
            new_str += new_ans;
        }
        if (carry > 0) { 
            new_ans = to_string(carry);
            new_str += new_ans;
        }
    reverse(new_str.begin(),new_str.end());
    return new_str;
    }
};