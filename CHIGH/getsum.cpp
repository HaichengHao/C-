#include<stdio.h>
//����û�з���ֵ
//��������Ϊgs
//��ɹ��ܣ�����һ����+1
void gs(int n) {
	int n2 = n + 1;
	printf("%d+1=%d\n",n, n2);
}
int getSum(int n1, int n2) {
	return n1 + n2;
}
void main() {
	int num = 6;
	gs(num);
	int res = getSum(1, 9);
	printf("res=%d", res);
	printf("\nokok");
}