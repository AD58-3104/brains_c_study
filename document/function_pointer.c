#include <stdio.h>
int add(int a,int b){
    return a + b;
}

int mul(int a,int b){
    return a*b;
}

struct calc
{
    int (*ADD)(int ,int);
    int (*MUL)(int , int );
};

int main(){
    struct calc obj;
    obj.ADD = add;
    obj.MUL = mul;
    int sum = obj.ADD(123,87);
    printf("%d\n",sum);
    sum = obj.MUL(2,4);
    printf("%d",sum);
}