//#include<stdio.h>
////1.����������Ϊcal
////2.�����з���ֵ
////3.�β��б�Ϊ(int n1 ,int n2,char oper)
////4.�ں����У�����ʹ�õı�����Ҫ���β��б��еı�����һ��
//double cal(int n1 ,int n2,char oper){
//	//����һ����������������
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
//		printf("��������");
//		break;
//	}printf("%d %c %d = %.2f", n1, oper, n2, res);
//	return res;
//
//}
////=======����Ϊ��������=====
//void main() {
//	//ʹ�ú������������������
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
//	//�������涨��ĺ���
//	printf("�ú����������������:");
//	res1=cal(num1, num2, oper1);//��num1,num2,oper1��ֵ��������cal(n1,n2,oper)�е��β�n1,n2,oper
//	printf("\ncal�������صĽ��Ϊres=%.2f", res1);
//	//����ڶ�����������
//	printf("\n�ú�������ڶ�����������:");
//	res2=cal(num3, num4, oper2);
//	printf("\ncal�������صĽ��Ϊres=%.2f", res2);
//}
///*
//�ú����������������:10 - 20 = -10.00
//�ú�������ڶ�����������:60 * 80 = 4800.00
//*/