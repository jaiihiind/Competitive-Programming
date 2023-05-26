class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int a=0;
        int z=numbers.size()-1;
        while(a < z){   //not (for) loop

        int sum = (numbers[a]+ numbers[z]);   //Always declared inside loop

         if(sum == target){
                return {a+1,z+1};
         }
        else if(target < sum ) {
                z--;
            }
        else{
                a++;
                }
        }

        return vector{-1,-1};
       // return {};     //when dont find any case /(pair) return empty pair
    }
};




 
