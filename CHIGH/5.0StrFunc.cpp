//#include<stdio.h>
//#include<string.h>//头文件中声明了字符串相关的系统函数
//void main() {
//	char src[50]= "张一", dest[50]= "hi";
//	char str[20] = "abcde";
//	printf("str.len = %d", strlen(str));//strlen()就是用来统计str的长度
//
//	//注意，拷贝字符串会将原来的内容覆盖掉原来字符变量内的内容（值）
//	strcpy(src, "张三");//表示将“张三”拷贝到src,覆盖掉了“张一”
//	strcpy(dest, "hello");//表示将“hello”拷贝到dest，覆盖掉了“hi”
//
//	//strcat是将src字符串的内容连接到dest，但是不会覆盖dest原有的内容，而是追加
//	strcat(dest , src);//表示将src和dest合并，src放到dest末尾 
//	printf("最终的目标字符串:|%s|", dest);
//
//
//}
///*
//str.len = 5最终的目标字符串:|hello张三|
//*/