#define _CRT_SECURE_NO_WARNINGS
#include"function.h"
struct RegistrationMember* UserSystem(struct RegistrationMember* rhead, struct Doctor* dhead, struct Patient* phead)//用户系统
{
	system("cls");
	int input = 0;//用户操作选项
	do
	{
		UserInterface();//打印用户界面
		scanf("%d", &input);
		switch (input)
		{
		case 1://挂号
			rhead = RegistrationSystem(dhead, rhead);
			break;
		case 2://查看用户挂号信息
			rhead = RegistrationCheck(rhead);
			break;
		case 3://查看用户收费信息
			phead=PaymentCheck(phead);
			break;
		}
	} while (input);
	return rhead;
}
struct RegistrationMember* RegistrationSystem(struct Doctor* dhead, struct RegistrationMember* rhead)//挂号操作
{
	system("cls");
	int input = 0;//科室选项
	char name[20];//医生姓名
	int check = 0;
	struct Doctor* p1 = dhead;
	do
	{
		printf("0:退出  1:外科  2:内科  3:妇科  4:儿科\n");
		printf("请选择科室：");
		scanf("%d", &input);
		switch (input)
		{
		case 0:break;
		case 1:
			do
			{
				system("cls");
				for (struct Doctor* p0 = dhead; p0->next != NULL; p0 = p0->next)
				{
					if (strcmp(p0->office, "外科") == 0)//打印所有外科信息
					{
						printf("姓名：%s  性别：%s  年龄：%d  电话号码：%lld  值班时间：%s\n", p0->name, p0->sex, p0->age, p0->number, p0->worktime);
					}
				}
				if (check)//循环后错误提示
				{
					printf("未找到该名医生！！请重新输入！！\n");
				}
				printf("请选择医生并输入医生姓名：");
				scanf("%s", name);
				for (p1 = dhead; strcmp(p1->name, name) != 0 && p1->next != NULL; p1 = p1->next)//找到名字或遍历到最后一个 
				{
				}
				if (strcmp(p1->name, name) == 0) //找到 
				{   //添加挂号链表
					check = 0;
					rhead = RegistrationSingleMemberCreat(rhead, p1);
					printf("挂号成功");
				}
				else
					check = 1;
			} while (check);
			break;
		case 2:
			do
			{
				system("cls");
				for (struct Doctor* p0 = dhead; p0->next != NULL; p0 = p0->next)
				{
					if (strcmp(p0->office, "内科") == 0)//打印内科信息
					{
						printf("姓名：%s  性别：%s  年龄：%d  电话号码：%lld  值班时间：%s\n", p0->name, p0->sex, p0->age, p0->number, p0->worktime);
					}
				}
				if (check)//循环后错误提示
				{
					printf("未找到该名医生！！请重新输入！！\n");
				}
				printf("请选择医生并输入医生姓名：");
				scanf("%s", name);
				for (p1 = dhead; strcmp(p1->name, name) != 0 && p1->next != NULL; p1 = p1->next)//找到名字或遍历到最后一个 
				{
				}
				if (strcmp(p1->name, name) == 0) //找到 
				{   //添加挂号链表
					check = 0;
					rhead = RegistrationSingleMemberCreat(rhead, p1);
					printf("挂号成功\n");
				}
				else
					check = 1;
			} while (check);
			break;
		case 3:
			do
			{
				system("cls");
				for (struct Doctor* p0 = dhead; p0->next != NULL; p0 = p0->next)
				{
					if (strcmp(p0->office, "妇科") == 0)//打印妇科信息
					{
						printf("姓名：%s  性别：%s  年龄：%d  电话号码：%lld  值班时间：%s\n", p0->name, p0->sex, p0->age, p0->number, p0->worktime);
					}
				}
				if (check)//循环后错误提示
				{
					printf("未找到该名医生！！请重新输入！！\n");
				}
				printf("请选择医生并输入医生姓名：");
				scanf("%s", name);
				for (p1 = dhead; strcmp(p1->name, name) != 0 && p1->next != NULL; p1 = p1->next)//找到名字或遍历到最后一个 
				{
				}
				if (strcmp(p1->name, name) == 0) //找到 
				{   //添加挂号链表
					check = 0;
					rhead = RegistrationSingleMemberCreat(rhead, p1);
					printf("挂号成功\n");
				}
				else
					check = 1;
			} while (check);
			break;
		case 4:
			do
			{
				system("cls");
				for (struct Doctor* p0 = dhead; p0->next != NULL; p0 = p0->next)
				{
					if (strcmp(p0->office, "儿科") == 0)//打印儿科信息
					{
						printf("姓名：%s  性别：%s  年龄：%d  电话号码：%lld  值班时间：%s\n", p0->name, p0->sex, p0->age, p0->number, p0->worktime);
					}
				}
				if (check)//循环后错误提示
				{
					printf("未找到该名医生！！请重新输入！！\n");
				}
				printf("请选择医生并输入医生姓名：");
				scanf("%s", name);
				for (p1 = dhead; strcmp(p1->name, name) != 0 && p1->next != NULL; p1 = p1->next)//找到名字或遍历到最后一个 
				{
				}
				if (strcmp(p1->name, name) == 0) //找到 
				{   //添加挂号链表
					check = 0;
					rhead = RegistrationSingleMemberCreat(rhead, p1);
					printf("挂号成功\n");
				}
				else
					check = 1;
			} while (check);
			break;
		default:printf("请重新输入:");
			break;
		}
	} while (input);
	return rhead;
}
struct RegistrationMember* RegistrationSingleMemberCreat(struct RegistrationMember* rhead, struct Doctor* p1)//挂号创建新的链表成员
{
	struct RegistrationMember* p0 = NULL;
	p0 = (struct RegistrationMember*)malloc(sizeof(struct RegistrationMember));
	printf("请输入您的姓名:");
	scanf("%s", p0->name);
	printf("请输入您的性别:");
	scanf("%s", p0->sex);
	printf("请输入您的年龄:");
	scanf("%d", &p0->age);
	printf("请输入您的电话号码:");
	scanf("%lld", &p0->number);
	printf("请输入您的不适症状:");
	scanf("%s", p0->symptom);
	printf("请输入您的就诊时间:");
	scanf("%s", p0->intime);
	strcpy(p0->docname, p1->name);
	char office[50];
	char docname[50];
	strcpy(office, p1->office);
	strcpy(docname, p0->docname);
	strcat(office, docname);
	strcpy(p0->docname, office);
	p0->next = rhead;
	rhead = p0;
	return rhead;
}
struct RegistrationMember* RegistrationCheck(struct RegistrationMember* head)//用户查看自己的挂号信息
{
	system("cls");
	char name[50];//用户姓名
	int check = 1;
	do
	{
		printf("请输入查询对象姓名:");
		scanf("%s", name);
		for (struct RegistrationMember* p0 = head; p0->next != NULL; p0 = p0->next)
		{
			if (strcmp(name, p0->name) == 0)
			{
				check = 0;
				printf("%s  %s  %d  %lld  %s  %s  %s\n", p0->name, p0->sex, p0->age, p0->number, p0->symptom, p0->docname, p0->intime);
			}
		}
		if (check)//未找到对象
		{
			printf("未找到该对象！！\n");
		}
	} while (check);
	int back = 0;
	printf("输入任意数字并回车返回主界面：");
	scanf("%d",&back);
	return head;
}
struct Patient* PaymentCheck(struct Patient* head)
{
	system("cls");
	char name[50];//用户姓名
	int check = 1;
	do
	{
		printf("请输入查询对象姓名:");
		scanf("%s", name);
		for (struct Patient* p0 = head; p0->next != NULL; p0 = p0->next)
		{
			if (strcmp(name, p0->name) == 0)
			{
				check = 0;
				printf("%s %d %s %lld %s %s %s\n", p0->name, p0->age, p0->sex, p0->number, p0->diagnosis, p0->schedule,p0->payment );
			}
		}
		if (check)//未找到对象
		{
			printf("未找到该对象！！\n");
		}
	} while (check);
	int back = 0;
	printf("输入任意数字并回车返回主界面：");
	scanf("%d", &back);
	return head;
}