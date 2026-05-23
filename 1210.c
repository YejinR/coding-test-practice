#include <stdio.h>

int main(){
    int menu1, menu2;
    int caloly=0;
    scanf("%d %d", &menu1, &menu2);

    int menus[2] = {menu1, menu2};
    for(int i = 0; i < 2; i++){
        if(menus[i] == 1)       caloly += 400;
        else if(menus[i] == 2)  caloly += 340;
        else if(menus[i] == 3)  caloly += 170;
        else if(menus[i] == 4)  caloly += 100;
        else if(menus[i] == 5)  caloly += 70;
    }
    
    if (caloly>500){
        printf("angry");
    }
    else{
        printf("no angry");
    }
    return 0;
}