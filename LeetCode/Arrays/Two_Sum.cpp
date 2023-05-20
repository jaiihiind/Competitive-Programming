class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <int> ret;   //made a empty vector

        for(int i=0; i< nums.size() ; i++){
            for(int j=i+1; j< nums.size() ; j++){
                if (nums[i] + nums[j] == target){

                    ret.push_back(i);
                    ret.push_back(j);   //stored in the vec made.
                }
            }
        }
        return ret;   // empty set
        
    }
};
