class Solution {
public:
    int countPairs(vector<int>& nums, int target) {
       int i=0;
       int j=0;
        int count=0;
        int n=nums.size();
        
        for( i=0;i<n;i++){
            for(j=i+1;j<n;j++){
            if(nums[i]+nums[j]<target){
                count++;
                
            }
               
            }
           
            
            

        }
        return count;
    }
};