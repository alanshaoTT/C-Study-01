#include <stdio.h>
int main(void){
    int a1, a2, a3, min;

    printf("please inter a1:");   scanf("%d", &a1);
    printf("please inter a2:");   scanf("%d", &a2);
    printf("please inter a3:");   scanf("%d", &a3);

    min = (((a1 < a2) ? a1 : a2) < a3) ? ((a1 < a2) ? a1 : a2) : a3;

    printf("the min is %d", min);
    return 0;
}