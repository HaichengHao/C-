//#include<stdio.h>
//double price = 200.0;
//void test01() {
//	printf("%.2f\n", price);//在这里是全局变量200.00（局部变量没有赋值，就用全局变量）
//}void test02() {
//	price = 250.0;//重新定义了全局变量
//	printf("%.2f\n", price);//这里是250.00
//}
//void main() {
//	printf("main price = %.2f\n", price);//这里是全局变量200.00
//	test01();//这里是全局变量200.00
//	test02();//由于重新定义了全局变量，这里是250.00
//	test01();//由于test02()重新定义了全局变量200.0-->250.00,所以这里是250.00
//	getchar();
//}
//
///*
//main price = 200.00
//200.00
//250.00
//250.00
//*/