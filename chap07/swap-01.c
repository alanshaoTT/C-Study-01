#include <stdio.h>
void swap(int a, int b){
    int tmp = b;
    b = a;
    a = tmp;
}
int main(void){
    int a = 1;
    int b = 2;
    swap(a, b);
    printf("a:%d", a);
    printf("b:%d", b);
    return 0;
}