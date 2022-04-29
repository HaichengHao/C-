//#include<stdio.h>
////1.函数名命名为cal
////2.函数有返回值
////3.形参列表为(int n1 ,int n2,char oper)
////4.在函数中，我们使用的变量名要和形参列表中的变量名一样
//double cal(int n1 ,int n2,char oper){
//	//定义一个变量保存运算结果
//	double res = 0.0;
//
//	switch (oper) {
//	case'+':
//		res = n1 + n2;
//		break;
//	case'-':
//		res = n1 - n2;
//		break;
//	case '*':
//		res = n1 * n2;
//		break;
//	case '/':
//		res = n1 / n2;
//		break;
//	default:
//		printf("输入有误");
//		break;
//	}printf("%d %c %d = %.2f", n1, oper, n2, res);
//	return res;
//
//}
////=======以上为函数定义=====
//void main() {
//	//使用函数完成两个计算任务
//	int num1 = 10;
//	int num2 = 20;
//	double res1 = 0.0;
//	char oper1 = '-';
//
//	int num3 = 60;
//	int num4 = 80;
//	double res2 = 0.0;
//	char oper2 = '*';
//
//	//调用上面定义的函数
//	printf("用函数来解决计算任务:");
//	res1=cal(num1, num2, oper1);//把num1,num2,oper1的值赋给函数cal(n1,n2,oper)中的形参n1,n2,oper
//	printf("\ncal函数返回的结果为res=%.2f", res1);
//	//解决第二个计算任务
//	printf("\n用函数解决第二个计算任务:");
//	res2=cal(num3, num4, oper2);
//	printf("\ncal函数返回的结果为res=%.2f", res2);
//}
///*
//用函数来解决计算任务:10 - 20 = -10.00
//用函数解决第二个计算任务:60 * 80 = 4800.00
//*/