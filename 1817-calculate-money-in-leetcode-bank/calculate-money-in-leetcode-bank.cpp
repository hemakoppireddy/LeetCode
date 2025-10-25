class Solution {
public:
    int totalMoney(int n) {
        int prevSum=1, sum=0;
        // if(n<=7){
        //     for(int i=1;i<=n;i++){
        //         sum+=prevSum;
        //         prevSum+=1;
        //     }
        // }
        // else{
        //     for(int i=1;i<=n;i++){
        //         if(i<=7){
        //             sum+=prevSum;
        //             prevSum+=1;
        //         }
        //         else{
        //             sum+=((i%7)+(i/7));
        //         }
        //     }
        // } 
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