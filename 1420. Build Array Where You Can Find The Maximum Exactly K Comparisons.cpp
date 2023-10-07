class Solution {
public:
    int N,M,K;
    int MOD = 1e9+7;
    int t[51][51][101];
    int solve(int idx, int searchCost, int maxS ){
        if(idx==N){
            if(searchCost == K){
                return 1;
            }
            return 0;
            
        }
        if(t[idx][searchCost][maxS]!=-1){
            return t[idx][searchCost][maxS];
        }
        int result =0;
        for(int i=1; i<=M; i++){
            if(i>maxS){
                result = (result+solve(idx+1,searchCost+1,i))%MOD;
            }else{
                result= (result+solve(idx+1,searchCost,maxS))%MOD;
            }
        }
        return t[idx][searchCost][maxS]=result % MOD;
    }
    int numOfArrays(int n, int m, int k) {
        N = n;
        M=m;
        K =k;
        memset(t,-1,sizeof(t));
        return solve(0,0,0);
    }
};