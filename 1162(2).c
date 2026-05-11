#include <stdio.h>

int main(){
    int year, month, day;
    int luck;
    scanf("%d %d %d", &year, &month, &day);
    luck = year-month+day;
    if(luck%10 == 0){
        printf("대박");
    }
    else{
        printf("그럭저럭");
    }
    return 0;
}