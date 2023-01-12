#include <stdio.h>
int min3(int a, int b, int c){
    int min;
    min = (a < b) ? a : b;
    return min = (min < c) ? min : c;
}
int main(void){
    int a, b, c;
    puts("请输入三个整数：");
    printf("a:");  scanf("%d", &a);
    printf("b:");  scanf("%d", &b);
    printf("c:");  scanf("%d", &c);
    printf("最小值是:%d", min3(a, b, c));
    return 0;
}