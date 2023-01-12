#include <stdio.h>
int main(void){
    int a = 178;
    int b = 179;
    int c = 180;
    int *ap, *bp;
    ap = &a;  bp = &b;
    printf("ap is point to %d\n", *ap);
    printf("bp is point to %d\n", *bp);
    ap = &c;
    *bp = 180;
    printf("ap is now point to %d\n", *ap);
    printf("b is now %d", b);
    return 0;
}