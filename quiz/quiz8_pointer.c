/*
reviseという関数にaとbの値を二倍にするという処理を定義してください。
実行して1530 1752　と出力されたら正解です。
*/



#include <stdio.h>
void revise(int* ptr_1,int* ptr_2){
    //↓ここに記入する









    //↑ここに記入する
}

int main(){
    int a = 765,b = 876;
    int* a_ptr = &a;
    int* b_ptr = &b;
    revise(a_ptr,b_ptr);
    printf("%d %d",*a_ptr,*b_ptr);
}