#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//define�����ʶ������
#define PI 3.14
#define C 10
#define STR "abcdfrg"
int main() {
	//������Ϊ�����泣����const���εĳ����� #define����ı�ʶ������  ö�ٳ���

	//���泣����
	30;
	3.14;
	'w';//�ַ�����

	//const���εĳ�����,�����Ǳ��������ǲ��ܱ�ֱ���޸ģ��г���������,���������ı���
	//������һ���ռ䣬������һ��ʵ�ʵ�ֵ������ֻ�������˳���������const������ֵ�����ǽ��ռ��Ϊ��ֵ

	const int a = 10;

	int arr[10] = { 0,1,2,3,4,5,6,7,8 };//�������a��ʾ��Ҫһ��������a���ǳ���
	//     a = 20;//�˴��޷��޸�
	int i;
	for (i = 0; i < 9; i++) {
		printf("%d\n",arr[i]);
	}

	double b = PI * a;
	printf("%f\n",b);
	printf("%s\n", STR);



	//ö�ٳ���
	enum Sex
	{
		Male,
		FeMale,
		Unkown
	};
	enum Sex s = Unkown;

	//char�ַ�����
	'w';
	//c������û���ַ�������

	//�ַ������Է����ַ�������
	//   \ 0���ַ����Ľ�����־,�ַ�����ĩβһ�������һ��\0
	char arr1[] = "abcde";
	char arr2[] = { 'a','b','c','d','e'};
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	//strlen���ַ������ȵĺ���,ͷ�ļ�string.h
	int len = strlen("abc");
	printf("%d\n", len);
	printf("%d\n", strlen(arr2));//��Ϊarr2��û\0���Գ����һֱ���Ѱ�ң�ֱ���ҵ�\0�����Գ��Ȳ�һ��

	printf("�ú�ѧϰ\n");
	printf("yes  or  no,yesΪ1��noΪ0\n");
	int yn ;
		scanf("%d", &yn);
	if (yn==1)
	{
		printf("��ɹ���\n");
	}
	else {
		printf("��ע��ʧ��\n");
	}

	/*printf("�Ƿ����Ʊ����1��0ѡ��һ��");
	int cp = 0;
	scanf("%d", &cp);
	if (cp == 0) {
		printf("��û�н����Ƿ����ѧϰ");
		int sf = 0;
		scanf("%d", &sf);
		if (sf == 1) {
			printf("��ɹ���");

		}
		else
		{
			printf("��ʧ����");
		}
	}
	else
	{
		printf("�Բۣ����������ֱ������6000��");
	}*/
	int line = 0;
	while (line < 10) {
		printf("ѧϰѧϰѧϰ\n");
		line++;
	}
	if (line >= 10) {
		printf("���ſ�\n");
	}
	else
	{
		printf("��������\n");
	}
	//int num01, num02;
	//printf("���������������м��ö��Ÿ���\n");
	//scanf("%d,%d", &num01, &num02);
	// int sum=ADD(num01, num02);
	// printf("%d", sum);


	//�������    �洢��ͬ���͵�����
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