////#include<stdio.h>
////void main() {
////	static int n;//n是静态局部变量，默认是有初始值的，初始化为0
////	//printf("n=%d", n);//n=0
////}
//
////demo2
//
///*
//静态局部变量只会被初始化1次！！
//*/
//#include<stdio.h>
//void fn(void) {//普通变量，每次执行都要初始化，n在栈区
//	int n = 10;
//	printf("n=%d\n", n);
//	n++;
//	printf("n++=%d\n", n);
//}
//void fn_static(void) {//静态局部变量，放在静态存储区，全局性的空间
//	static int n = 10;
//	printf("static n = %d\n", n);//n = 10
//	n++; //n++=10+1=11
//	printf("n++=%d\n", n);//n++=11
//}
//int main(void) {
//	fn();
//	printf("--------\n");
//	fn_static();//第一次调用
//	printf("--------\n");
//	fn();
//	printf("--------\n");
//	fn_static();//第二次调用时不会再对静态局部变量进行初始化，而是在第一调用的基础上变化
//	return 0;
//}
///*
//n=10
//n++=11
//--------
//static n = 10
//n++=11
//--------
//n=10
//n++=11
//--------
//static n = 11
//n++=12
//*/