////#include<stdio.h>
////
////	enum DAY {
////		mon = 1,tue,wed,thu,fri,sat,sun//如果没有赋值，就会顺自动给没赋值的枚举元素赋值
////	} day;//定义了一个枚举类型enum DAY,包含了7个枚举元素mon=1,...sun,同时定义了一个枚举变量day
////	
////	int main() {//int类型
////		//遍历枚举元素，枚举的每个元素都对应数值
////		//day++会给出警告，但是可以运行
////		for (day = mon; day <= sun; day++) {
////			printf("枚举元素:%d\n", day);
////		}
////		getchar();
////		return 0;//返回值类型要与上面的对应
////	}
////	/*
////枚举元素:1
////枚举元素:2
////枚举元素:3
////枚举元素:4
////枚举元素:5
////枚举元素:6
////枚举元素:7
////*/
//
////demo2 == 枚举再switch上的运用
//#include<stdio.h>
//int main() {
//	enum SEASON{ sp=1 ,su ,au,win};//定义枚举类型enum SEASON,它包含4个元素，sp,su,au,win
//	enum SEASON season;//定义枚举变量season(类型为enum SEASON)
//	printf("请输入你喜欢的季节:(1.spring,2.summer,3.autumn,4.winter):");
//	scanf_s("%d", &season);
//	switch (season) {
//	case sp:
//		printf("你喜欢春天");
//		break;
//	case su:
//		printf("你喜欢夏天");
//		break;
//	case au:
//		printf("你喜欢秋天");
//		break;
//	case win:
//		printf("你喜欢冬天");
//		break;
//	default:
//		printf("请重新输入");
//	}return 0;
//}