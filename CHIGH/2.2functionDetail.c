////#include<stdio.h>
////void f1() {
////	int num = 10;
////	printf("num = %d", num);
////}
////void main() {
////	//printf("num = %d", num);这里的num会报错，因为函数中的变量是局部的，函数外是不生效的
////}
//
//
////如果希望函数内的变量能够修改函数外的变量，可以传入变量的地址&,
////函数内以指针的方式操作变量，从效果上看类似引用（即传递指针）
//#include<stdio.h>
//void f3(int* p) {//参数列表定义为指针变量，被调用之后传入的参数是地址变量
//	(*p)++;//地址变量的值+1,这里就是让指针p指向n的地址来改变n的值，这个地方会影响函数外的值
//	printf("p的地址为%p\n,\np的值为%#X", &p,p);//   p的地址为0000008FD62FF680 p的值为0XD62FF6A4
//}
//
////void f3(int n1, int n2) {//c语言不支持函数重载，即不能通过参数列表的参数个数不同或类型不同来区别函数
//
////}
//void main() {
//	int n = 9;//定义变量n=9
//	printf("n的地址为%p\n", &n);//n的地址为0000008FD62FF6A4
//	f3(&n);//调用函数f3,把n的地址传入函数f3的参数列表
//	printf("\nmain函数中n=%d", n);
//}
////main函数中n=10
//
////比较地址，我们可以看到，函数f3中指针变量*p的值为n=9的地址