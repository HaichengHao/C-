////#include<stdio.h>
////
////	enum DAY {
////		mon = 1,tue,wed,thu,fri,sat,sun//���û�и�ֵ���ͻ�˳�Զ���û��ֵ��ö��Ԫ�ظ�ֵ
////	} day;//������һ��ö������enum DAY,������7��ö��Ԫ��mon=1,...sun,ͬʱ������һ��ö�ٱ���day
////	
////	int main() {//int����
////		//����ö��Ԫ�أ�ö�ٵ�ÿ��Ԫ�ض���Ӧ��ֵ
////		//day++��������棬���ǿ�������
////		for (day = mon; day <= sun; day++) {
////			printf("ö��Ԫ��:%d\n", day);
////		}
////		getchar();
////		return 0;//����ֵ����Ҫ������Ķ�Ӧ
////	}
////	/*
////ö��Ԫ��:1
////ö��Ԫ��:2
////ö��Ԫ��:3
////ö��Ԫ��:4
////ö��Ԫ��:5
////ö��Ԫ��:6
////ö��Ԫ��:7
////*/
//
////demo2 == ö����switch�ϵ�����
//#include<stdio.h>
//int main() {
//	enum SEASON{ sp=1 ,su ,au,win};//����ö������enum SEASON,������4��Ԫ�أ�sp,su,au,win
//	enum SEASON season;//����ö�ٱ���season(����Ϊenum SEASON)
//	printf("��������ϲ���ļ���:(1.spring,2.summer,3.autumn,4.winter):");
//	scanf_s("%d", &season);
//	switch (season) {
//	case sp:
//		printf("��ϲ������");
//		break;
//	case su:
//		printf("��ϲ������");
//		break;
//	case au:
//		printf("��ϲ������");
//		break;
//	case win:
//		printf("��ϲ������");
//		break;
//	default:
//		printf("����������");
//	}return 0;
//}