class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
 vector<int>a(2);
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(nums[i]+nums[j]==target){
            a[0]=i;
            a[1]=j;
        }
    }
}
    return a;
    }  
};

        
        
