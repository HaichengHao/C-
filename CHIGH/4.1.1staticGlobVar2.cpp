//demo1
#include<stdio.h>
//一个文件中定义了普通的全局变量后，整个工程可见，不能够在另外的文件中定义和已定义的普通全局变量同名的变量
//在一个文件中使用另一个文件的全局变量（普通全局变量）,使用extern引入即可
extern int num;//extern int num;不用再添加值
static int num2 = 20;//我们在本文件中定义的静态全局变量可以使用
void main() {
	printf("\nnum=%d", num);//num=10
 //printf("\nnum2=%d",num2);//这里不能输出，报错，因为静态全局变量只能在它所在的文件中使用
	printf("\nnum2=%d", num2);//这里可以输出，因为我们给自己的本文件内设置了静态全局变量
}
/*

num=10
num2=20
*/