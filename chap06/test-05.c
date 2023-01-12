#include <stdio.h>
void print_arr(const int v[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("v[%d]=%d\n", i, v[i]);
    }
}
void set_arr_0(int v[], int n){
    for (int i = 0; i < n; i++)
    {
        v[i] = 0;
    }
}
int main(void){
    int v[5] = {12,2,2,3,4};
    print_arr(v, 5);
    set_arr_0(v, 5);
    print_arr(v, 5);
    return 0;
}