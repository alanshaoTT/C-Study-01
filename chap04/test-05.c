#include <stdio.h>
int main(void){
    int x;
    puts("输入一个整数：");
    scanf("%d", &x);

    for(int i = 0; i < x; i++){
        if(i % 5 == 0){
            putchar('\n');
            printf("*");
        } else{
            printf(" ");
            printf("*");
        }
    }
    return 0;
}