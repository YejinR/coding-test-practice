#include<stdio.h>


int main(){
    int day;
    scanf("%d", &day);

    if(day == 1 || day == 3 || day == 5 || day == 7){
        printf("oh my god");
    }
    else{
        printf("enjoy");
    }
    return 0;
}