//#include<stdio.h>
//#include<time.h>//��ͷ�ļ��У����������ں�ʱ����صĺ���
//int main() {
//	time_t curtime;//time_h�ǽṹ������
//	time(&curtime);//time()����������Ի�ȡ����ǰʱ�䣬������ɳ�ʼ������
//	
//	//ctime����һ����ʾ��ǰʱ����ַ���������ʱ���ǻ��ڲ���timer
//	printf("��ǰʱ��=%s", ctime(&curtime));
//	return(0);
//
//}
//
////#include<stdio.h>
////#include<time.h>
////void test() {//����test������ͳ��ִ�л��ѵ�ʱ��
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
////	double diff_t;//���ʱ���
////	printf("��������...\n");
////	time(&start_t);//��ʼ�����õ���ǰʱ��
////	//1.�ȵõ�test����ִ��ǰ��ʱ��
////	test();//ִ��test
////	//2.�ٵõ�ִ��test���ʱ��
////	// 
////	time(&end_t);
////	diff_t = difftime(end_t, start_t);//ʱ���������
////	//3.Ȼ��������ʱ�����Ǻ���ִ�е�ʱ��
////
////	printf("����ִ��ʱ��Ϊ:%.10f", diff_t);
////	return 0;
////}