class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        vector<int> count(26,0);
        for(int i=0;i<s.length();i++){
            count[s[i] - 'a']++;
        }
        for(int j=0;j<t.length();j++){
            count[t[j] - 'a']--;
        }
        for(int i : count) {
            if( i != 0) return false;
        }
        return true;
    }
};