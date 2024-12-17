#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//define定义标识符常量
#define PI 3.14
#define C 10
#define STR "abcdfrg"
int main() {
	//常量分为：字面常量，const修饰的常变量 #define定义的标识符常量  枚举常量

	//字面常量：
	30;
	3.14;
	'w';//字符常量

	//const修饰的常变量,本质是变量，但是不能被直接修改，有常量的属性,即被锁定的变量
	//变量是一个空间，常量是一个实际的值，变量只是容纳了常量，并用const锁定了值二不是将空间变为数值

	const int a = 10;

	int arr[10] = { 0,1,2,3,4,5,6,7,8 };//如果填入a提示需要一个常量，a不是常量
	//     a = 20;//此处无法修改
	int i;
	for (i = 0; i < 9; i++) {
		printf("%d\n",arr[i]);
	}

	double b = PI * a;
	printf("%f\n",b);
	printf("%s\n", STR);



	//枚举常量
	enum Sex
	{
		Male,
		FeMale,
		Unkown
	};
	enum Sex s = Unkown;

	//char字符类型
	'w';
	//c语言中没有字符串类型

	//字符串可以放在字符数组中
	//   \ 0是字符串的结束标志,字符串的末尾一般会隐藏一个\0
	char arr1[] = "abcde";
	char arr2[] = { 'a','b','c','d','e'};
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	//strlen求字符串长度的函数,头文件string.h
	int len = strlen("abc");
	printf("%d\n", len);
	printf("%d\n", strlen(arr2));//因为arr2中没\0所以程序会一直向后寻找，直到找到\0，所以长度不一定

	printf("好好学习\n");
	printf("yes  or  no,yes为1，no为0\n");
	int yn ;
		scanf("%d", &yn);
	if (yn==1)
	{
		printf("你成功了\n");
	}
	else {
		printf("你注定失败\n");
	}

	/*printf("是否买彩票数字1或0选择一个");
	int cp = 0;
	scanf("%d", &cp);
	if (cp == 0) {
		printf("你没中奖，是否继续学习");
		int sf = 0;
		scanf("%d", &sf);
		if (sf == 1) {
			printf("你成功了");

		}
		else
		{
			printf("你失败了");
		}
	}
	else
	{
		printf("卧槽，你运气真好直接中了6000万");
	}*/
	int line = 0;
	while (line < 10) {
		printf("学习学习学习\n");
		line++;
	}
	if (line >= 10) {
		printf("入门咯\n");
	}
	else
	{
		printf("继续加油\n");
	}
	//int num01, num02;
	//printf("输入俩个整数，中间用逗号隔开\n");
	//scanf("%d,%d", &num01, &num02);
	// int sum=ADD(num01, num02);
	// printf("%d", sum);


	//数组相关    存储相同类型的数据
	int arr3[] = { 1,2,3,4,5,6,7,8,9,10 };
	for (int j = 0; j < 10; j++) {
		printf("%d\t", arr3[j]);
	}
	printf("\n");
	char arr4[] = {"dase"};
	for (int  i = 0; i < strlen(arr4); i++)
	{
		printf("%c", arr4[i]);
	}

	

	return 0;
}
ADD(int x, int y) {
	int sum = 0;
	sum = x + y;
	return sum;
}