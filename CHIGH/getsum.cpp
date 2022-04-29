#include<stdio.h>
//函数没有返回值
//函数名字为gs
//完成功能，传入一个数+1
void gs(int n) {
	int n2 = n + 1;
	printf("%d+1=%d\n",n, n2);
}
int getSum(int n1, int n2) {
	return n1 + n2;
}
void main() {
	int num = 6;
	gs(num);
	int res = getSum(1, 9);
	printf("res=%d", res);
	printf("\nokok");
}