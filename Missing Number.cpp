class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size()+1;
        int expectedsum=0;
        int actualsum=0;
        int miss;
        for(int i=0;i<nums.size();i++){
           actualsum=actualsum+nums[i];
            
        }
         for(int i=0;i<n;i++){
           expectedsum+=i;
            
        }
       return  miss=expectedsum- actualsum;     
    }
};
