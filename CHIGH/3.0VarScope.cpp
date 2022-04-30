/*
变量的作用域基本说明
所谓的变量作用域（scope）就是指变量的有效范围
(1)函数内部声明/定义的局部变量，作用域仅限于函数内部
(2)函数的参数，形式参数，被当作该函数的局部变量，如果与全局变量同名，
它们会优先使用（编译使用就近原则)
*/

//#include<stdio.h>
//int n = 20;//函数外部定义的变量，就是全局变量
//void Sayhello() {
//	char name[] = "tom";//name就是局部变量，作用于Sayhello函数当中
//	printf("hello %s\n", name);
//}
//void f1(int n) {//函数的形参会被视为f1的局部变量
//	printf("n= %d", n);//n = 10当局部变量和全局变量同名时，以局部变量为主
//}
//void main() {
//	//Sayhello();
//	//printf("name = %s", name);//这里提示，没有定义name，因为函数内声明的局部变量作用域仅限于函数的内部
//	f1(10);
//}

/*
（3）在一个代码块，比如for/if中的局部变量，那么这个变量的作用域就在该代码块
（4）在所有函数外部定义的变量，就叫全局变量，作用域在整个程序有效
*/

//eg3
//#include<stdio.h>
//void main() {
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		int k = 9;
//		printf("i=%d k =%d\n", i, k);
//	}
//	//printf("k=%d", k);//这里会报错，原因：k为函数内部定义的变量，不能够在函数外使用
//
//}