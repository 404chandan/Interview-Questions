class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        string m = "";
        for(int i=0;i<n;++i){
            if(isalnum(s[i])){
                m.push_back(tolower(s[i]));
            }
        }
        string t = m;
        reverse(t.begin(),t.end());
        if(t==m) {
            return true;
        }
        return false;
    }
};
