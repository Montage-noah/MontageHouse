//  ������ 
//#include<stdio.h>
//#include<time.h>
//#include<stdlib.h>
//
//void menu()
//{
//	printf("********************\n");
//	printf("**** 1.������ ******\n");
//	printf("**** 0.�˳���Ϸ ****\n");	
//	printf("********************\n");
//}
//void game()
//{
//	int ret=0;
//	int num=0;
//	ret=rand()%100+1;
//	while(1)
//	{
//		printf("�������\n");
//		scanf("%d",&num); 
//		if(num==ret)
//		{
//			printf("�¶���!\n");
//			break;
//		}
//		else if(num<ret)
//			printf("��С��!\n");
//		else
//			printf("�´���!\n");
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
//			printf("��Ϸ����!\n");	
//		else 
//			printf("�����������������\n");
//	}	while(a);
//	return 0;
// } 


// ���ֲ��� 
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
//		printf("�Ҳ���!\n");
//	else 
//		printf("�ҵ���:%d\n",ret); 
//		
//	return 0;
// } 
// 


// ��������������� 
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char password[]="hehehe";
//	char input[20];
//	while(count)
//	{
//		printf("����������\n");
//		scanf("%s",input);
//		if(0==strcmp(password,input))
//		{	
//			printf("������ȷ\n");
//			break;
//		}
//		else
//		{
//			count--;
//			printf("������󣬻�ʣ%d�λ���\n",count);		
//		} 
//		
//	}
//	
//	
//	return 0;
// } 

//  ��Сдת�� 
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