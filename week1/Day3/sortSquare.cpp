class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>res;
         int result=0;
        for(int i=0;i<nums.size();i++){
            result=nums[i]*nums[i];
            res.push_back(result);
        }
       sort(res.begin(),res.end());
        return res;
    }
};