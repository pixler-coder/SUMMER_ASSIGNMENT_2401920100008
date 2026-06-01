class Solution {
    public:
    //Time Complexity: O(n)
    //Space Complexity: O(1)
        int removeDuplicates(vector<int>& nums) {
            int j=1;
            int count=1;
            for(int i=0;i<nums.size()-1;i++){
                if(nums[i]!=nums[i+1]){
                    nums[j]=nums[i+1];
                    j++;
                    count++;
                }
            }
            return count;
        }
    };