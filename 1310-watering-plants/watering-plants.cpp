class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int n=plants.size();
        int steps=0;
        int rem=capacity;
        for(int i=0; i<n; i++){
            if(rem>=plants[i]){
                steps++;
                rem-=plants[i];
            }
            else{
                steps+=((i*2)+1);
                rem=capacity;
                rem-=plants[i];
            }
        }
        return steps;
    }
};