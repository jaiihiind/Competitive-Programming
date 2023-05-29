class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> output;

        if(n<1) return output;   //Boundary case

        // LEFT SIDE PRODUCT CALCULATAION (left -> right)
        int product =1;   
        for(int i=0; i < n ; i++){
            product = product * nums[i];  //gets updated everytime
            output.push_back(product);
        }

        // TOTAL PRODUCT CALC. ( LEFT & RIGHT)
// Output is our ans.now (l+r) , as left prod. is already calculated & now *lying with right also->(product:is whole (right multiple) here )
        product =1; 
        for(int i = n-1; i>0; i--){

            output[i] = output[i-1] * product; // ans calculation
            product = product * nums[i];  // Right *lycation here
        }
        
        output[0] = product;  //Extreme case

        return output;
    }
};
