class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int t) {
          vector<int>ans;
      for(int i=0;i<arr.size();i++)
      {
            for(int j=i+1;j<arr.size();j++)
            {
                if(arr[i]+arr[j]==t)
                {
                    ans.push_back(i);
                    ans.push_back(j);
                    break;

                }
            }
      }
        return ans;
    }
};