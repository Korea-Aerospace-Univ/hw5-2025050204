#include <stdio.h>

int main(void){
    int N, rs=0;//기본이 0
    
    scanf("%d", &N);
    
    for(int i=1; 900*i<=N; i++){
        for(int j =2; 900*i + 750*j<=N; j+=2){
            for(int k =1; 900*i + 750*j + 200*k <= N; k++){
                int gkq = 900*i + 750*j + 200*k;
                if(gkq == N){
                    if(k<i || k <j){
                        printf("%d %d %d\n", i, j, k);
                        rs=1;
                    }
                    break;
                if(gkq>N){
                    break;
                }
                
                }
            }   
        
        }
    
    }
    if(rs==0){
            printf("none");
        }
    return 0;
}
