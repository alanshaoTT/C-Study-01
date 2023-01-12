#include <stdio.h>
int main(void){
    int tag;

    do
    {
        int x;
        printf("请输入一个整数：");
        scanf("%d", &x);
        if(x % 2 == 0){
            printf("是个偶数\n");
        } else{
            printf("这是奇数\n");
        }

        puts("是否继续...继续[0]...退出[1]");
        scanf("%d", &tag);
    } while (tag == 0);
    
    return 0;
}