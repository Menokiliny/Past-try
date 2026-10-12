#define _CRT_SECURE_NO_WARNINGS
#include"function.h"
struct RegistrationMember* RegistrationMemberDelete(struct RegistrationMember* head)//删除挂号信息
{
	char name[50];
	int check = 0;
	do
	{
		system("cls");
		RegistrationMemberPrint(head);
		if (check)//未找到对象循环时的提醒
		{
			printf("未找到该对象！\n");
		}
		printf("请输入删除对象姓名：");
		scanf("%s", name);
		struct RegistrationMember* p2 = head;
		struct RegistrationMember* p1 = head;
		for (p1 = head; p1->next != NULL && (strcmp(p1->name, name) != 0); p1 = p1->next)//找到或遍历到最后一个停止
		{
			p2 = p1;
		}
		if (strcmp(p1->name, name) == 0)//找到
		{
			check = 0;
			if (p1 == head)//是第一个
			{
				head = p1->next;
			}
			else
			{
				p2->next = p1->next;
			}
			RegistrationMemberPrint(head);
		}
		else//没找到
		{
			check = 1;
		}
	} while (check);
	return head;
}
struct Drug* DrugDelete(struct Drug* head)//删除药品信息
{
	char name[50];
	int check = 0;
	do
	{
		system("cls");
		DrugDatePrint(head);
		if (check)//未找到对象循环时的提醒
		{
			printf("未找到该对象！\n");
		}
		printf("请输入删除对象姓名：");
		scanf("%s", name);
		struct Drug* p2 = head;
		struct Drug* p1 = head;
		for (p1 = head; p1->next != NULL && (strcmp(p1->name, name) != 0); p1 = p1->next)//找到或遍历到最后一个停止
		{
			p2 = p1;
		}
		if (strcmp(p1->name, name) == 0)//找到
		{
			check = 0;
			if (p1 == head)//是第一个
			{
				head = p1->next;
			}
			else
			{
				p2->next = p1->next;
			}
			DrugDatePrint(head);
		}
		else//没找到
		{
			check = 1;
		}
	} while (check);
	return head;
}
struct Patient* PatientDelete(struct Patient* head)//删除病人信息
{
	char name[50];
	int check = 0;
	do
	{
		system("cls");
		PatientDatePrint(head);
		if (check)//未找到对象循环时的提醒
		{
			printf("未找到该对象！\n");
		}
		printf("请输入删除对象姓名：");
		scanf("%s", name);
		struct Patient* p2 = head;
		struct Patient* p1 = head;
		for (p1 = head; p1->next != NULL && (strcmp(p1->name, name) != 0); p1 = p1->next)//找到或遍历到最后一个停止
		{
			p2 = p1;
		}
		if (strcmp(p1->name, name) == 0)//找到
		{
			check = 0;
			if (p1 == head)//是第一个
			{
				head = p1->next;
			}
			else
			{
				p2->next = p1->next;
			}
			PatientDatePrint(head);
		}
		else//没找到
		{
			check = 1;
		}
	} while (check);
	return head;
}
struct Doctor* DoctorDelete(struct Doctor* head)//删除医生信息
{
	char name[50];
	int check = 0;
	do
	{
		system("cls");
		DoctorDatePrint(head);
		if (check)//未找到对象循环时的提醒
		{
			printf("未找到该对象！\n");
		}
		printf("请输入删除对象姓名：");
		scanf("%s", name);
		struct Doctor* p2 = head;
		struct Doctor* p1 = head;
		for (p1 = head; p1->next != NULL && (strcmp(p1->name, name) != 0); p1 = p1->next)//找到或遍历到最后一个停止
		{
			p2 = p1;
		}
		if (strcmp(p1->name, name) == 0)//找到
		{
			check = 0;
			if (p1 == head)//是第一个
			{
				head = p1->next;
			}
			else
			{
				p2->next = p1->next;
			}
			DoctorDatePrint(head);
		}
		else//没找到
		{
			check = 1;
		}
	} while (check);
	return head;
}