#include <stdio.h>
int main(void){
    int x1, x2;

    puts("请输入两个数字：");

    printf("第一个数字是："); scanf("%d", &x1);
    printf("第二个数字是："); scanf("%d", &x2);

    printf("两个数的和是：%d", x1+x2);

    return 0;
}