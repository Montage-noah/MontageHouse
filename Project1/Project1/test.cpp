//  猜数字 
//#include<stdio.h>
//#include<time.h>
//#include<stdlib.h>
//
//void menu()
//{
//	printf("********************\n");
//	printf("**** 1.猜数字 ******\n");
//	printf("**** 0.退出游戏 ****\n");	
//	printf("********************\n");
//}
//void game()
//{
//	int ret=0;
//	int num=0;
//	ret=rand()%100+1;
//	while(1)
//	{
//		printf("请猜数字\n");
//		scanf("%d",&num); 
//		if(num==ret)
//		{
//			printf("猜对了!\n");
//			break;
//		}
//		else if(num<ret)
//			printf("猜小了!\n");
//		else
//			printf("猜大了!\n");
//	}
//		
//}
//
//int main()
//{
//	int a=0;
//	srand( (unsigned int) time(NULL));
//	do
//	{	
//		menu();
//		scanf("%d",&a);
//		if(1==a)
//			game();
//		else if(0==a)
//			printf("游戏结束!\n");	
//		else 
//			printf("输入错误，请重新输入\n");
//	}	while(a);
//	return 0;
// } 


// 二分查找 
//#include<stdio.h>
//
//int binary_search(int arr[] ,int key,int left, int right) 
//{
//	while(left<=right)
//	{
//		int mid=left+(right-left)/2;
//		if(arr[mid]==key)
//		{
//			return mid;
//		}
//		else if(arr[mid]<key)
//		{	
//			left=mid+1;
//		}
//		else
//		{
//			right=mid-1;
//		}
//
//	}
//
//	
//	
//}
//
//int main()
//{
//	int arr[10]={1,2,3,4,5,6,7,8,9,10};
//	int key=7;
//	int left=0;
//	int right=sizeof(arr)/sizeof(arr[0])-1;
//	int ret=binary_search(arr ,key ,left ,right);
//	if(-1==ret)
//		printf("找不到!\n");
//	else 
//		printf("找到啦:%d\n",ret); 
//		
//	return 0;
// } 
// 


// 三次密码输入机会 
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char password[]="hehehe";
//	char input[20];
//	while(count)
//	{
//		printf("请输入密码\n");
//		scanf("%s",input);
//		if(0==strcmp(password,input))
//		{	
//			printf("密码正确\n");
//			break;
//		}
//		else
//		{
//			count--;
//			printf("输入错误，还剩%d次机会\n",count);		
//		} 
//		
//	}
//	
//	
//	return 0;
// } 

//  大小写转换 
#include<stdio.h>
#include<ctype.h> 
int main()
{
	while (1)
	{
		char a, b;
		a = getchar();
		if (a >= 'a'&&a <= 'z')
		{
			b = toupper(a);
		}
		else if (a >= 'A'&&a <= 'Z')
		{
			b = tolower(a);
		}
		else if (a >= '0'&&a <= '9')
		{
			continue;
		}
		else
		{
			b = a;
		}
		printf("%c", b);


	}
	return 0;
}