#define _CRT_SECURE_NO_WARNINGS
#include"function.h"
struct RegistrationMember* RegistrationMemberCreat()//创建挂号链表
{
	int rline = CountFileLines("registrtion.txt");//计算文件内数据行数
	struct RegistrationMember* head = NULL, * p1 = NULL, * p2 = NULL;
	p1 = p2 = (struct RegistrationMember*)malloc(sizeof(struct RegistrationMember));
	head = NULL;
	for (int i = 0; i < rline; )
	{
		i++;
		if (i == 1)
		{
			head = p1;
		}
		else
		{
			p2->next = p1;
		}
		p2 = p1;
		p1 = (struct RegistrationMember*)malloc(sizeof(struct RegistrationMember));
	}
	p2->next = NULL;
	return head;
}
struct Drug* DrugCreat()//创建药品链表
{
	int line = CountFileLines("drug.txt");//计算文件内数据行数
	struct Drug* head = NULL, * p1 = NULL, * p2 = NULL;
	p1 = p2 = (struct Drug*)malloc(sizeof(struct Drug));
	head = NULL;
	for (int i = 0; i < line; )
	{
		i++;
		if (i == 1)
		{
			head = p1;
		}
		else
		{
			p2->next = p1;
		}
		p2 = p1;
		p1 = (struct Drug*)malloc(sizeof(struct Drug));
	}
	p2->next = NULL;
	return head;
}
struct Patient* PatientCreat()//创建病人链表
{
	int line = CountFileLines("patient.txt");//计算文件内数据行数
	struct Patient* head = NULL, * p1 = NULL, * p2 = NULL;
	p1 = p2 = (struct Patient*)malloc(sizeof(struct Patient));
	head = NULL;
	for (int i = 0; i < line; )
	{
		i++;
		if (i == 1)
		{
			head = p1;
		}
		else
		{
			p2->next = p1;
		}
		p2 = p1;
		p1 = (struct Patient*)malloc(sizeof(struct Patient));
	}
	p2->next = NULL;
	return head;
}
struct Doctor* DoctorCreat()//创建医生链表
{
	int line = CountFileLines("doctor.txt");//计算文件内数据行数
	struct Doctor* head = NULL, * p1 = NULL, * p2 = NULL;
	p1 = p2 = (struct Doctor*)malloc(sizeof(struct Doctor));
	head = NULL;
	for (int i = 0; i < line; )
	{
		i++;
		if (i == 1)
		{
			head = p1;
		}
		else
		{
			p2->next = p1;
		}
		p2 = p1;
		p1 = (struct Doctor*)malloc(sizeof(struct Doctor));
	}
	p2->next = NULL;
	return head;
}