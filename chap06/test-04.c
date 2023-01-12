#include <stdio.h>
int max_arr(int v[]){
    int max = v[0];
    for(int i = 1; i < 5; i++){
        if(v[i] > max) max = v[i];
    }
    return max;
}
int main(void){
    int eng[5] = {81, 83, 82, 66, 99};
    int math[5] = {69, 63, 77, 88, 55};
    printf("数学最高分为：%d", max_arr(math));
    printf("英语最高分为：%d", max_arr(eng));
    return 0;
}