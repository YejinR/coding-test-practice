#include <stdio.h>

int main(){

    int arr1[100];
    int arr2[100];
    int bonus;
    int result=0;
    int bonusMatch = 0;
    for (int i=0;i<6;i++){
        scanf("%d", &arr1[i]);
    }
    scanf("%d", &bonus);

    for (int i=0;i<6;i++){
        scanf("%d", &arr2[i]);
    }

    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            if(arr1[i]==arr2[j]){
                result++;
            }
        }
    }

    for(int i=0; i<6;i++){
        if(arr2[i]==bonus){
            bonusMatch = 1;
        }
    }
    if (result == 6){
        printf("1");
    } else if (result == 5 && bonusMatch){
        printf("2");
    } else if (result == 5){
        printf("3");
    } else if (result == 4){
        printf("4");
    } else if (result == 3){
        printf("5");
    } else { //0~2이하 
        printf("0"); 
    }
    return 0;
}