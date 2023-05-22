class Solution {
public:
    int pivotIndex(vector<int>& nums) {
    int lsum = 0;
    int rsum = accumulate(nums.begin(),nums.end(),0);  //stored the full sum 

        for(int i = 0; i < nums.size(); i++){
            rsum = rsum - nums[i];   //checking by subs.(the pivot) 

            if(lsum == rsum){
                return i;    //returned the index
            }
            lsum = lsum + nums[i];  //adding and checking
        }
        return -1;  //return this outside the loop
    }
};
