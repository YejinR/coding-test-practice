#include <stdio.h>

int main(){

    int n=0;
    int sum=0;
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        sum+=i;
        if(sum>=n){
            printf("%d", i);
            return 0;
        }
    }
    return 0;
}