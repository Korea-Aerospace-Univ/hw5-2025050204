#include <stdio.h>

int main(void){
    int N;
    
    scanf("%d", &N);
    
    for(int i=1; ; i++){
        for(int j =2; ; j*=2){
            for(int k =1; ; k++){
                if(900*i + 750*j + 200*k > N || k < i || k < j){
                    printf("none");
                    break;
                    
                }else{
                    printf("%d %d %d\n", i, j ,k);
                }
            }
        }
    }
}
