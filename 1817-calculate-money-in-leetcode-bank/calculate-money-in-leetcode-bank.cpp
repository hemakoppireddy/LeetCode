class Solution {
public:
    int totalMoney(int n) {
        int sum=0;
        int flag=0;
        for(int i=1;i<=n;i++){
            if(i%7!=0) sum+=((i%7)+(i/7));
            else{
                sum+=(7+flag);
                flag+=1;
            }
        }
        return sum;
    }
};