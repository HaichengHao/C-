#include<stdio.h>
extern void func1();//引用非静态函数，只需要extern +返回值类型，函数名，参数列表即可
void main() {
	int a = 20;
	func1(a);
}