class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int n = people.size();
        sort(people.begin(), people.end());
        int i=0, j=n-1, count=0;
        while(i<j) {
            if(people[i]==limit){
                count++; i++;
            }
            if(people[j]==limit) {
                count++; j--;
            }
            int sum = people[i]+people[j];
            if(sum > limit) {
                count++;
                j--;
            }
            else {
                count++; i++; j--;
            }
        }
        if(i==j) count++;
        return count;
    }
};