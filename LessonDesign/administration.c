#define _CRT_SECURE_NO_WARNINGS
#include"function.h"
struct RegistrationMember* RegistrationMemberAdministration(struct RegistrationMember* head)//挂号信息管理
{
	int input = 0;//操作指令
	do
	{
		system("cls");
		RegistrationMemberPrint(head);
		printf("0:退出 1:修改信息 2:删除信息\n");
		if (input < 0 || input>2)//指令不在范围内的提醒
		{
			printf("输入错误！！请重新输入！！\n");
		}
		printf("请输入操作指令：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:system("cls");
			RegistrationMemberPrint(head);
			printf("接下来进行修改信息操作！！\n");
			head = RegistrationMemberModification(head);
			break;
		case 2:system("cls");
			RegistrationMemberPrint(head);
			printf("接下来进行删除信息操作！！\n");
			head = RegistrationMemberDelete(head);
			break;
		}
	} while (input);
	return head;
}
struct Drug* DrugAdministration(struct Drug* head)//药品信息管理
{
	int input = 0;//操作指令
	do
	{
		system("cls");
		DrugDatePrint(head);
		printf("0:退出 1:修改信息 2:添加信息 3:删除信息 4:价格排序\n");
		printf("请输入操作指令：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:system("cls");
			DrugDatePrint(head);
			printf("接下来进行修改信息操作！！");
			head = DrugModification(head);
			break;
		case 2:system("cls");
			DrugDatePrint(head);
			printf("接下来进行添加信息操作！！\n");
			head = DrugAddition(head);
			break;
		case 3:system("cls");
			DrugDatePrint(head);
			printf("接下来进行删除信息操作！！\n");
			head = DrugDelete(head);
			break;
		case 4:head = Sort(head);
			break;
		}
	} while (input);//退出input==0结束循环 
	return head;
}
struct Patient* PatientAdministration(struct Patient* head)//病人信息管理
{
	int input = 0;//操作指令
	do
	{
		system("cls");
		PatientDatePrint(head);
		printf("0:退出 1:修改信息 2：添加信息 3：删除信息\n");
		printf("请输入操作指令：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:system("cls");
			PatientDatePrint(head);
			printf("接下来进行修改信息操作！！");
			head = PatientModification(head);
			break;
		case 2:system("cls");
			PatientDatePrint(head);
			printf("接下来进行添加信息操作！！\n");
			head = PatientAddition(head);
			break;
		case 3:system("cls");
			PatientDatePrint(head);
			printf("接下来进行删除信息操作！！\n");
			head = PatientDelete(head);
			break;
		}
	} while (input);//退出input==0结束循环 
	return head;
}
struct Doctor* DoctorAdministration(struct Doctor* head)//医生信息管理
{
	int input = 0;//操作指令
	do
	{
		system("cls");
		DoctorDatePrint(head);
		printf("0:退出 1:修改信息 2：添加信息 3：删除信息\n");
		printf("请输入操作指令：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:system("cls");
			DoctorDatePrint(head);
			printf("接下来进行修改信息操作！！");
			head = DoctorModification(head);
			break;
		case 2:system("cls");
			DoctorDatePrint(head);
			printf("接下来进行添加信息操作！！\n");
			head = DoctorAddition(head);
			break;
		case 3:system("cls");
			DoctorDatePrint(head);
			printf("接下来进行删除信息操作！！\n");
			head = DoctorDelete(head);
			break;
		}
	} while (input);//退出input==0结束循环 
	return head;
}
struct Patient* PaymentAdministration(struct Patinet* head)//收费信息管理
{
	system("cls");
	int input = 0;
	do
	{
		PaymentPrint(head);
		printf("***0:退出  1:修改收费信息***\n");
		printf("请输入:");
		scanf("%d", &input);
		if (input)
		{
			head = PaymentModification(head);
		}
	} while (input);
	return head;
}