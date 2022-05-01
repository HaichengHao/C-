//#include<stdio.h>
//#include<time.h>//该头文件中，声明和日期和时间相关的函数
//int main() {
//	time_t curtime;//time_h是结构体类型
//	time(&curtime);//time()这个函数可以获取到当前时间，可以完成初始化任务
//	
//	//ctime返回一个表示当前时间的字符串，当地时间是基于参数timer
//	printf("当前时间=%s", ctime(&curtime));
//	return(0);
//
//}
//
////#include<stdio.h>
////#include<time.h>
////void test() {//运行test函数，统计执行花费的时间
////	int i = 0;
////	int sum = 0;
////	int j = 0;
////	for (i = 0; i < 77777777; i++) {
////		sum = 0;
////		for (j = 0; j < 10; j++) {
////			sum += j;
////		}
////	}
////}
////
////int main() {
////
////
////	time_t start_t, end_t;
////	double diff_t;//存放时间差
////	printf("程序启动...\n");
////	time(&start_t);//初始化，得到当前时间
////	//1.先得到test函数执行前的时间
////	test();//执行test
////	//2.再得到执行test后的时间
////	// 
////	time(&end_t);
////	diff_t = difftime(end_t, start_t);//时间差，按秒计算
////	//3.然后这两个时间差就是函数执行的时间
////
////	printf("函数执行时间为:%.10f", diff_t);
////	return 0;
////}