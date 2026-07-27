class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(nums.begin(),nums.end());
        int longest=0;
        
        for (int x: nums){
            if(s.find(x-1) ==s.end()){
                int current =x;
                int streak=1;
                while(s.find(current+1 )!= s.end()){
                    current++;
                    streak++;
                }
longest=max(longest,streak);

            }
         
        
        }
return longest;
    }
};
