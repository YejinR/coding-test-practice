#include <stdio.h>

int main(){
    int year, month;
    scanf("%d %d", &year, &month);
    int result=0; 
    if((year%400==0) || (year%4==0 && year%100!=0)){
        if(month ==2){
            result = 29;
        }
    }
    else{
        if(month ==2){
            result = 28;
        }
        else if(month == 1 || month ==3|| month ==5|| month ==7|| month ==8|| month ==10|| month ==12){
            result = 31;
        }
        else if(month == 4 || month ==6|| month ==9|| month ==11){
            result = 30;
        }
    }
    printf("%d", result);
    return 0;
}


/*
#include <stdio.h>

int main(){
    int year, month;
    scanf("%d %d", &year, &month);
    
    int days[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    if((year%400==0) || (year%4==0 && year%100!=0)){
        days[2] = 29;
    }
    
    printf("%d", days[month]);
    return 0;
}
*/