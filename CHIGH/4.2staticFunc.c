#include<stdio.h>
void func1(int a) {//��ͨ�������Ǿ�̬����
	printf("hello from func1\n");
	printf("a=%d", a);
}
static void func2(void) {//��̬������ֻ���ڵ�ǰ�ļ�ʹ��
	printf("hello from fun2\n");
}