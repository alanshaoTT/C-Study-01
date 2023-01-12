#include <stdio.h>
int main(void){
    printf("请输入两个整数。\n");

    int a, b;
    printf("a:");  scanf("%d", &a);
    printf("b:");  scanf("%d", &b);
    printf("他们的和是%d,积是%d", a+b, a*b);
    return 0;
}