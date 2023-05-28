class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
       vector<vector<int>> ans; 
       sort(nums.begin(),nums.end());
       int n=nums.size();

       for(int i = 0; i<n ; i++ ){
           if(i>0 && nums[i] == nums[i-1]) continue;  //cont.->will run in same loop not go in loops below <---> go forward b/c not need same element(prev elem.)

           int j = i+1;
           int k = n-1; // poited @ last
           while(j<k){
               int sum = nums[i] + nums[j] + nums[k];
               if(sum < 0){
                   j++;
               }
               else if (sum > 0){
                   k--;
               }
               else{        // when got the ans. 
                   vector<int> temp = {nums[i] , nums[j] , nums[k]};  //stored ans in vector
                   ans.push_back(temp);  
                   j++;                     //whole same case again .
                   k--;
                   while(j < k && nums[j] == nums[j-1])      j++ ;  //if prev. no same then ++
                   while(j < k && nums[k] == nums[k+1])      k-- ;  //this traversing backard --
               } } }
                return ans;
    }
};
