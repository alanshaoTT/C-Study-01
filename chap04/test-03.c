#include <stdio.h>
int main(void){
    int x;
    printf("请输入一个整数\n");
    scanf("%d", &x);
    while(x != 0){
        printf("%d  ", x);
        x--;
    }
    return 0;
}