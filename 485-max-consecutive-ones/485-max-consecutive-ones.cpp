class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        long long cnt=0,maxi=0;
      for(auto&i:nums)
      {
          if(i==1)cnt++;
          else
          {
              maxi=max(maxi,cnt);
              cnt=0;
          }
      }
      return max(cnt,maxi);
    }
};