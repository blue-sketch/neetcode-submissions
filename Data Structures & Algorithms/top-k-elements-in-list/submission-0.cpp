class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
       for(int i:nums){
        mp[i]++; }
       vector<int> ans;
       for(auto it:mp){
        ans.push_back(it.first);
       }
       sort(ans.begin(),ans.end(),[&mp](int a,int b){
        return mp[a] > mp[b];
       });
      ans.resize(k);
      return ans;

            
        }
        
    
};
