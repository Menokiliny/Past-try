#define _CRT_SECURE_NO_WARNINGS
#include"function.h"
struct Drug* DrugAddition(struct Drug* head)//添加药品信息 
{
	if (head == NULL)
	{
		printf("head=NULL");
		return head;
	}
	struct Drug* add = (struct Drug*)malloc(sizeof(struct Drug));
	struct Drug* p0 = head;
	if (add == NULL)
	{
		printf("add分配内存失败");
		return head;
	}
	add->next = NULL;
	printf("请输入药品姓名：");
	scanf("%s", add->name);
	printf("\n");
	printf("请输入药品规格：");
	scanf("%s", add->specification);
	printf("\n");
	printf("请输入药品厂家：");
	scanf("%s", add->manufacturers);
	printf("\n");
	printf("请输入药品价格：");
	scanf("%f", &add->prize);
	for (p0 = head; p0->next != NULL; p0 = p0->next)//使p0指向链表最后一个
	{
	}
	p0->next = add;//新结构体接在最后
	return head;
}
struct Patient* PatientAddition(struct Patient* head)//添加病人信息 
{
	if (head == NULL)
	{
		printf("head=NULL");
		return head;
	}
	struct Patient* add = (struct Patient*)malloc(sizeof(struct Patient));
	struct Patient* p0 = head;
	if (add == NULL)
	{
		printf("add分配内存失败");
		return head;
	}
	add->next = NULL;
	printf("请输入病人姓名：");
	scanf("%s", add->name);
	printf("\n");
	printf("请输入病人年龄：");
	scanf("%d", &add->age);
	printf("\n");
	printf("请输入病人性别：");
	scanf("%s", add->sex);
	printf("\n");
	printf("请输入病人电话号码：");
	scanf("%lld", &add->number);
	printf("\n");
	printf("请输入病人诊断结果：");
	scanf("%s", add->diagnosis);
	printf("\n");
	printf("请输入病人治疗方案：");
	scanf("%s", add->schedule);
	for (p0 = head; p0->next != NULL; p0 = p0->next)//使p0指向链表最后一个
	{
	}
	p0->next = add;//新结构体接在最后
	return head;
}
struct Doctor* DoctorAddition(struct Doctor* head)//添加医生信息 
{
	if (head == NULL)
	{
		printf("head=NULL");
		return head;
	}
	struct Doctor* add = (struct Doctor*)malloc(sizeof(struct Doctor));
	struct Doctor* p0 = head;
	if (add == NULL)
	{
		printf("add分配内存失败");
		return head;
	}
	add->next = NULL;
	printf("请输入医生姓名：");
	scanf("%s", add->name);
	printf("\n");
	printf("请输入医生年龄：");
	scanf("%d", &add->age);
	printf("\n");
	printf("请输入医生性别：");
	scanf("%s", add->sex);
	printf("\n");
	printf("请输入医生电话号码：");
	scanf("%lld", &add->number);
	printf("\n");
	printf("请输入医生所属科室：");
	scanf("%s", add->office);
	printf("\n");
	printf("请输入医生专业领域：");
	scanf("%s", add->field);
	printf("\n");
	printf("请输入医生值班时间：");
	scanf("%s", add->worktime);
	for (p0 = head; p0->next != NULL; p0 = p0->next)//使p0指向链表最后一个
	{
	}
	p0->next = add;//新结构体接在最后
	return head;
}








