class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        double n = customers.size();
        int complete = customers[0][0];
        double wait =0;
        for(int i=0; i<n; i++){
            if(complete<customers[i][0]){
                complete=0;
                complete+=(customers[i][0]+customers[i][1]);
            }
            else{
                complete+=customers[i][1];
            }
            wait+=(complete-customers[i][0]);
        }
        double avg = wait/n;
        return avg;
    }
};