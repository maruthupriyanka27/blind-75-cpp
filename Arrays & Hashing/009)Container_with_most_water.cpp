// Container With Most Water: Use two pointers at both ends and move the pointer with the smaller height.
// Time: O(n) | Space: O(1)
class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int right=height.size() -1;
        int maxi=0;
        while(left<right){
            
            int width=right-left;
            int h=min(height[left],height[right]);
            int area=h*width;
            maxi=max(maxi,area);
            if(height[left]<height[right]){
                left++;
            }else{
                right--;
            }
        }
        return maxi;
    }
               
        
                  

        };

    
