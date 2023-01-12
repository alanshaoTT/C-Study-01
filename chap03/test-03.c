#include <stdio.h>
int main(void){
    int a1, a2, a3;

    printf("please inter a1:");   scanf("%d", &a1);
    printf("please inter a2:");   scanf("%d", &a2);
    printf("please inter a3:");   scanf("%d", &a3);

    if(a1 == a2 && a1 == a3 && a2 == a3){
        printf("三个相等");
    } else if(a1 == a2 || a1 == a3 || a2 == a3){
        printf("两个相等");
    } else{
        printf("没有相等");
    }
    return 0;
}