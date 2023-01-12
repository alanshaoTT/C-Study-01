#include <stdio.h>
int main(void){
    int x[5];
    int l = 0;
    for(int i = 0; i < 5; i++){
        printf("set x[%d] = ", i);
        scanf("%d", &x[i]);
        putchar('\n');
    }
    while(l < 5){
        printf("x[%d] = %d \n", l, x[l]);
        l++;
    }
    return 0;
}