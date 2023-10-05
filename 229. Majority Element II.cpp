class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n1 = INT_MIN; int n2 = INT_MIN;
        int count1=0 ,count2=0;
        for(int i=0; i<nums.size(); i++){
            if(n1==nums[i]){
                count1++;
            }
            else if(n2==nums[i]){
                count2++;
            }
            else if(count1==0){
                n1 = nums[i];
                count1=1;
            }
            else if(count2==0){
                n2 = nums[i];
                count2=1;
            }
            else{
                count1--;
                count2--;
            }
        }
        vector<int>output;
        int MajorityCount = nums.size()/3;
        count1=0,count2=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==n1){
                count1++;
            }
            if(nums[i]==n2){
                count2++;
            }
        }
        if(count1>MajorityCount){
            output.push_back(n1);
        }
        if(count2>MajorityCount){
            output.push_back(n2);
        }
        return output;
        
    }
};