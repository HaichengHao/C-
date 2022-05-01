//#include<stdio.h>
//#include<stdlib.h>
//void main() {
//	//四个字符数组
//	char str1[10] = "19291";
//	char str2[5] = "ab";
//	char str3[4] = "111";
//	char str4[10] = "12.213131";
//	//说明，atoi是将字符串转换成一个整数
//	//atof是将字符串转换成一个浮点数
//	int num1 = atoi(str1);
//	short c1 = str2[0];//97; //这里的str2[0]代表的是取出str字符数组的第一个参数的ASCII码值
//	short c2 = str2[1];//98；//这里的str2[1]代表的是取出str字符数组的第二个参数的ASCII码值
//	int num2 = atoi(str3);
//	double d1 = atof(str4);
//	short c3 = atoi(str2);//把str2转换成整形，这里会默认转成0，因为格式不正确，像“abcd”这样的字符串无法转换成整形
//	printf("num1 = %d , c1 = %d ,c2 = %d , num2 = %d , d1 = %.2f , c3 = %d", num1, c1,c2, num2, d1,c3);
//	/*
//	num1 = 19291 , c1 = 97 ,c2 = 98 , num2 = 111 , d1 = 12.21 , c3 = 0
//	*/
//}