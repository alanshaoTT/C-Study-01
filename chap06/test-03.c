#include <stdio.h>
int sumup(int n){
    int s = 0;
    for(int i=1; i <= n; i++){
        s += i;
    }
    return s;
}
int main(void){
    printf("1到100的整数和为：%d", sumup(100));
    return 0;
}