class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort (nums.begin(),nums.end());
        int count =0;

        if (nums.size() == 1){ //if only one elem. present
            return nums[0];
        }

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == nums[i+1]){       
                count++;
            }
            else{
                count = 0;   //start from again
            }

            if(count >= (nums.size()/2)){
                return nums[i];
            }
        }
        return 0;
    }
};
