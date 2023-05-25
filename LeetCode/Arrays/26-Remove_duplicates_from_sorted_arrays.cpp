class Solution {    //pointer concept used
public:
    int removeDuplicates(vector<int>& nums) {
        int j=0;    //one pointer @ [0] other @ [1]

        for(int i =1; i < nums.size()  ; i++){
            if(nums[j] != nums[i]){
                j++;
                nums[j] = nums[i];    //when != increm. & update
            }
        }
        return j+1;
        
    }
};
