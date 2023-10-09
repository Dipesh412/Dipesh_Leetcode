//using binary Search

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int left =0;
        int right = nums.size()-1;
        int first =-1,last=-1;

        while(left<=right){
            int mid = (left+right)/2;
            if(nums[mid]==target){
                first = mid;
                right = mid-1;
            }
            else if(nums[mid]>target){
                right = mid-1;
            }
            else{
                left = mid+1;
            }
        }

    int l=0, h = nums.size()-1;
    while(l<=h){
        int m = (l+h)/2;
        if(nums[m]==target){
            last =m;
            l = m+1;
        }
        else if(nums[m]>target){
            h = m-1;
        }
        else{
            l = m+1;
        }
    }
    return {first,last};
    }
};

-----------------------------------------------------------------------------------
Using brute force 

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int starting=-1, ending =-1;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==target){
                starting = i;
                break;
            }
        }
        for(int i=nums.size()-1; i>=0; i--){
            if(nums[i]==target){
                ending = i;
                break;
            }
        }
        return {starting , ending};
    }
};