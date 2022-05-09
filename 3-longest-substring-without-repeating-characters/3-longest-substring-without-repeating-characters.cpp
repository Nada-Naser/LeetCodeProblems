class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        array<int,256> last;
        last.fill(-1);
        int n = s.size(); 
        int start = 0, best = 0;
        for (int end = 0; end<n; end++) {
            start = max(start,last[s[end]]+1);
            best = max(best,end-start+1);
            last[s[end]] = end;
        }
        return best;
    }
};