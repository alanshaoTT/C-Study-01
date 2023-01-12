#include <stdio.h>
int main(void){
    int sum = 0;
    int count = 0;
    int tag;
    do{
        int aa;
        puts("请输入一个整数：");
        scanf("%d", &aa);
        sum += aa;
        count += 1;
        puts("继续...0/退出...1");
        scanf("%d", &tag);
    } while(tag == 0);
    printf("平均数是：%.3f", (double)sum/count);
    return 0;
}