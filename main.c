#include <stdio.h>


void change(int *a, int *b) {  //面试题，对a,b两个值交换，不能额外开辟内存（不能使用中间变量） 
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {

    int i = 100;
    printf("i 的值是:%d \n", i);
    printf("i 的地址是:%p \n", &i);
    printf("\n");
    printf("int 的基本数据类型所占的字节数 :%d  \n", sizeof(int));
    printf("double 的基本数据类型所占的字节数 :%d  \n", sizeof(double));
    printf("char 的基本数据类型所占的字节数 :%d \n", sizeof(char));


    i = 200;
    int a = 100, b = 200;
    int *m = &a;
    int *n = &b;
    change(m, n);
    int *p = &i;
    //通过指针修改值
    *p = 300;
    printf("i 的值是:%d \n", i);
    printf("a 的值是:%d\n b的值是:%d\n", a, b);
    return 0;


}


