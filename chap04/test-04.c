#include <stdio.h>
int main(void){
    int x;
    puts("enter a interger");
    scanf("%d", &x);

    if(x <= 0){
        puts("wrong input!");
    } else{
        while(x != 0){
            printf("*  ");
            x--;
        }
    }
    
    return 0;
}