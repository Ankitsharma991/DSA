class Solution{
public:
    int minimumDays(int S, int N, int M){
        // code here
        int sun = S/7;
        int BDay = S-sun;
        int totalFood = S*M;
        
        int ans;
        if((S*M)%N==0){
            ans = ((S*M)/N);
        }
        else{
            ans = (((S*M)/N)+1);
        }
        
        if(ans<=BDay){
            return ans;
        }
        else{
            return -1;
        }
        
    }
};