////练习2，定义一个函数NN，输入数字n，就打印1-n的九九乘法表
//#include<stdio.h>
//#include<time.h>
//time_t start_t, end_t;
//void NN(int n) {
//	int i, j;
//	for (i = 1; i <= n; i++) {
//		for (j = 1; j <= i; j++) {
//			printf("%d*%d=%d ", j, i, j * i);
//		}printf("\n");
//	}
//}
//
//void main() {
//	time(&start_t);
//	printf("请输入你想打印的乘法表的n的数：");
//	int n1 = 0;
//	scanf("%d", &n1);
//	NN(n1);
//	time(&end_t);
//	float runtime = difftime(end_t, start_t);
//	printf("\nruntime=%.6f", runtime);
//	getchar();
//}