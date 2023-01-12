#include <stdio.h>
int sqr(int a){
    return a * a;
}
int pow4(int a){
    return sqr(a) * sqr(a);
}
int main(void){
    int a = 8;
    printf("8的四次幂是：%d", pow4(8));
    return 0;
}