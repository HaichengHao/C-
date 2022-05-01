#include<stdio.h>
void func1(int a) {//普通函数，非静态函数
	printf("hello from func1\n");
	printf("a=%d", a);
}
static void func2(void) {//静态函数，只可在当前文件使用
	printf("hello from fun2\n");
}