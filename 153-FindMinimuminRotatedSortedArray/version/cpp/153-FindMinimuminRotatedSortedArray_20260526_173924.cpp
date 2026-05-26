// Last updated: 5/26/2026, 5:39:24 PM
1class Solution {
2public:
3    int findMin(vector<int>& nums) {
4
5        int l=0,r=nums.size()-1,mid;
6        while(l<r){
7          mid=(l+r)/2;
8          if(nums[mid]<nums[r]){
9            r=mid;
10          }
11          else{
12            l=mid+1;
13          }
14        }
15        return nums[l];
16    }
17};