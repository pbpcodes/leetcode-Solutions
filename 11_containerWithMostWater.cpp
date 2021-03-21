class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater = 0, left = 0, sizeOfHeight = height.size();
        int right = sizeOfHeight-1, hl=0, hr=0;
        
        while(left < right){
            hl = height[left];
            hr = height[right];
            
            maxWater = max(maxWater, min(hl,hr)*(right-left));
             
                if(hl >= hr){
                    right--;
                }
                if(hr >= hl){
                    left++;
                }
        }
        
        return maxWater;
    }
};