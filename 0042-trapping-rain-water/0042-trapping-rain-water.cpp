class Solution {
public:
    int trap(vector<int>& height) {
        int max1=-1;
        int tallest_index=0;
        for(int i=1;i<height.size();i++){
           if(height[i]>height[tallest_index]){
            tallest_index=i;
           }
            
        }
        int left_max=height[0];
        int water_store=0;
        int i=1;
        while(i<tallest_index){
            left_max=max(left_max,height[i]);
            water_store+=max(0,left_max-height[i]);
            i++;
        }
        int right_max=height[height.size()-1];
        int j=height.size()-2;
        while(j>tallest_index){
            right_max=max(right_max,height[j]);
           water_store+=max(0,right_max-height[j]);
            j--;
        }
        return water_store;
        
    }
};