////基本数据类型和字符串转换
//#include<stdio.h>
//void main() {
//	char str1[20];
//	char str2[20];
//	char str3[20];
//	int a = 90920, b = 23194;
//	double d = 14.24324;
//
//	//说明
//	//1.sprintf是一个系统函数，可以将结果存放到字符串中
//	//2.格式化的结果会存放到定义的字符数组变量中
//	sprintf(str1, "%d %d", a, b);
//	sprintf(str2, "%.2f", d);
//	sprintf(str3, "%8.2f", d);//%8.2的含义，格式化后一共有8位，小数点后占两位，不够的用空格补齐
//	printf("str1=%s str2=%s str3=%s", str1, str2, str3);
//}