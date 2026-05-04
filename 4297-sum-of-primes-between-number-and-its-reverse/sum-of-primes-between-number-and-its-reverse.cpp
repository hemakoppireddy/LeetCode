class Solution {
public:
    int sumOfPrimesInRange(int n) {
        int temp=n;
        int rev=0;
        while(temp>0) {
            int rem = temp%10;
            rev = rev*10+rem;
            temp/=10;
        }
        int max=0, min=0;
        if(n>rev){
            max = n;
            min = rev;
        }
        else {
            max = rev;
            min = n;
        }
        int sum=0;
        for(int i=min; i<=max; i++) {
            int flag=0;
            for(int j=2; j<i; j++) {
                if(i%j==0){
                    flag=1; break;
                } 
            }
            if(flag==0 && i!=1) sum+=i;
        }
        return sum;
    }
};