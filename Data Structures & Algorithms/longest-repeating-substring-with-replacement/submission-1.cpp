class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> freq(26,0);
        int l=0,maxF=0,maxL=0;
        for(int i=0;i<s.length();i++){
            freq[s[i] - 'A']++;
            maxF=max(maxF,freq[s[i] - 'A']);
            while((i - l + 1 )-maxF>k){
                freq[s[l] - 'A']--;
                l++;
            }
            maxL=max(maxL,i-l+1);
        }
        return maxL;
        
    }
};
