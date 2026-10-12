#define _CRT_SECURE_NO_WARNINGS
#include"function.h"
int RegistrationMemberPrint(struct RegistrationMember* head)//打印挂号信息
{
	if (head == NULL)
	{
		printf("head==NULL");
		return -1;
	}
	for (struct RegistrationMember* p0 = head; p0 != NULL; p0 = p0->next)
	{
		printf("%-20s %-10s %d %lld %-20s %-20s %-20s\n", p0->name, p0->sex, p0->age, p0->number, p0->symptom, p0->docname, p0->intime);
	}
	return 0;
}
int DrugDatePrint(struct Drug* head)//打印药品信息
{
	if (head == NULL)
	{
		printf("head==NULL\n");
		return -1;
	}
	for (struct Drug* p0 = head; p0 != NULL; p0 = p0->next)
	{
		printf(" %-20s  %-10s  %-10s  %.2f\n", p0->name, p0->specification, p0->manufacturers, p0->prize);
	}
	return 0;
}
int PatientDatePrint(struct Patient* head)//打印病人信息
{
	if (head == NULL)
	{
		printf("head==NULL\n");
		return -1;
	}
	for (struct Patient* p0 = head; p0 != NULL; p0 = p0->next)
	{
		printf("%s %d %s %lld %s %s\n", p0->name, p0->age, p0->sex, p0->number, p0->diagnosis, p0->schedule);
	}
	return 0;
}
int DoctorDatePrint(struct Doctor* head)//打印医生信息
{
	if (head == NULL)
	{
		printf("head==NULL\n");
		return -1;
	}
	for (struct Doctor* p0 = head; p0 != NULL; p0 = p0->next)
	{
		printf("%s %d %s %lld %s %s %s\n", p0->name, p0->age, p0->sex, p0->number, p0->office, p0->field, p0->worktime);
	}
	return 0;
}
void PaymentPrint(struct Patient* head)//收费信息打印
{
	struct Patient* p0 = head;
	for (; p0 != NULL; p0 = p0->next)
	{
		printf("姓名:%s  收费信息:%s\n", p0->name, p0->payment);
	}
}
