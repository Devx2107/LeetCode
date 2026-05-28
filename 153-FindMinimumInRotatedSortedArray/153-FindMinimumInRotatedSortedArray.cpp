// Last updated: 28/05/2026, 14:02:23
class Solution {
public:
    int findMin(vector<int>& nums) {

        int l=0,r=nums.size()-1,mid;
        while(l<r){
          mid=(l+r)/2;
          if(nums[mid]<nums[r]){
            r=mid;
          }
          else{
            l=mid+1;
          }
        }
        return nums[l];
    }
};