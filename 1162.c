#include <stdio.h>
#include <string.h>

int main(){
    int year, month, day;
    int luck;
    char a[30];
    scanf("%d %d %d", &year, &month, &day);
    luck = year-month+day;
    sprintf(a, "%d", luck);
    if(a[strlen(a)-1]=='0'){
        printf("대박NN");
    }
    else{
        printf("그럭저럭WW");
    }
    return 0;
}