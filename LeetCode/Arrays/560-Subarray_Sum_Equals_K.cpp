// BRUTE FORCE METHOD  (T L E ) WARNING !!!
// here the elem. are not choosen randomly...all in a line.
// hence, the total (prefix sum array) is calculated.
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n= nums.size();
        int count = 0 ; 

        for(int i =0; i < n ; i++){
            int sum = 0 ;
            for(int j=i; j< n ; j++){
                sum = sum + nums[j];
            if(sum == k)
                count++; 
            }
        }
            return count;  // return outside the for loop
    }
    
};



    
