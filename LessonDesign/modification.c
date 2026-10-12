#define _CRT_SECURE_NO_WARNINGS
#include"function.h"
struct RegistrationMember* RegistrationMemberModification(struct RegistrationMember* head)//挂号信息修改
{
	int check = 1;
	int input = 0;//修改对象的具体的修改选项
	//system("cls");
	char name[50];//修改对象名称
	system("cls");
	RegistrationMemberPrint(head);//打印数据信息供管理员选择
	printf("接下来进行修改信息操作！!\n");
	printf("请输入修改对象名称：");
	do
	{
		scanf("%s", name);
		for (struct RegistrationMember* p0 = head; p0 != NULL; p0 = p0->next)//遍历整个挂号链表
		{
			if (strcmp(p0->name, name) == 0)//找到对象
			{
				printf("找到\n");
				check = 0;
				//执行修改操作
				printf("病患:%s  性别:%s  年龄:%d  电话号码:%lld  症状:%s  问诊医生:%s  问诊时间:%s\n", p0->name, p0->sex, p0->age, p0->number, p0->symptom, p0->docname, p0->intime);
				do
				{
					do
					{
						printf("***0:退出  1:病患名称  2:性别  3.:年龄  4:电话号码  5:症状  6:问诊医生  7:问诊时间***\n");
						printf("请选择修改选项编号：");
						scanf("%d", &input);
						if (input > 0 && input < 8)//input在正确范围内
						{
							check = 0;
							switch (input)
							{
							case 1:printf("请输入修改后的内容：");
								scanf("%s", p0->name);
								printf("修改后数据：\n");
								printf("病患：%s  性别:%s  年龄:%d  电话号码:%lld  症状：%s  问诊医生：%s  问诊时间：%s\n", p0->name, p0->sex, p0->age, p0->number, p0->symptom, p0->docname, p0->intime);
								break;
							case 2:printf("请输入修改后的内容：");
								scanf("%s", p0->sex);
								printf("修改后数据：\n");
								printf("病患：%s  性别:%s  年龄:%d  电话号码:%lld  症状：%s  问诊医生：%s  问诊时间：%s\n", p0->name, p0->sex, p0->age, p0->number, p0->symptom, p0->docname, p0->intime);
								break;
							case 3:printf("请输入修改后的内容：");
								scanf("%d", &p0->age);
								printf("修改后数据：\n");
								printf("病患：%s  性别:%s  年龄:%d  电话号码:%lld  症状：%s  问诊医生：%s  问诊时间：%s\n", p0->name, p0->sex, p0->age, p0->number, p0->symptom, p0->docname, p0->intime);
								break;
							case 4:printf("请输入修改后的内容：");
								scanf("%lld", &p0->number);
								printf("修改后数据：\n");
								printf("病患：%s  性别:%s  年龄:%d  电话号码:%lld  症状：%s  问诊医生：%s  问诊时间：%s\n", p0->name, p0->sex, p0->age, p0->number, p0->symptom, p0->docname, p0->intime);
								break;
							case 5:printf("请输入修改后的内容：");
								scanf("%s", p0->symptom);
								printf("修改后数据：\n");
								printf("病患：%s  性别:%s  年龄:%d  电话号码:%lld  症状：%s  问诊医生：%s  问诊时间：%s\n", p0->name, p0->sex, p0->age, p0->number, p0->symptom, p0->docname, p0->intime);
								break;
							case 6:printf("请输入修改后的内容：");
								scanf("%s", p0->docname);
								printf("修改后数据：\n");
								printf("病患：%s  性别:%s  年龄:%d  电话号码:%lld  症状：%s  问诊医生：%s  问诊时间：%s\n", p0->name, p0->sex, p0->age, p0->number, p0->symptom, p0->docname, p0->intime);
								break;
							case 7:printf("请输入修改后的内容：");
								scanf("%s", p0->intime);
								printf("修改后数据：\n");
								printf("病患：%s  性别:%s  年龄:%d  电话号码:%lld  症状：%s  问诊医生：%s  问诊时间：%s\n", p0->name, p0->sex, p0->age, p0->number, p0->symptom, p0->docname, p0->intime);
								break;
							}
						}
						else if (input != 0)//非选择退出情况下选择错误的提醒
						{
							printf("输入错误！请重新输入!\n");
							check = 1;
						}
					} while (check);//进行正确修改后check==0
				} while (input);//满足input==0退出选项
			}
		}
		if (check)//未找到提醒
		{
			printf("没找到\n");
			printf("请重新输入：\n");
		}
	} while (check);//找到对应病人信息后check==0
	return head;
}
struct Drug* DrugModification(struct Drug* head)//药品信息修改
{
	int check = 1;
	int input = 0;//修改对象的具体的修改选项
	//system("cls");
	char name[50];//修改对象名称
	system("cls");
	DrugDatePrint(head);//打印数据信息供管理员选择
	printf("接下来进行修改信息操作！！\n");
	printf("请输入修改对象名称：");
	do
	{
		scanf("%s", name);
		for (struct Drug* p0 = head; p0 != NULL; p0 = p0->next)//遍历整个药品链表
		{
			if (strcmp(p0->name, name) == 0)//找到对应药品名称
			{
				printf("成功找到该药品！！\n");
				check = 0;
				//执行修改操作
				printf("药品名称：%s  规格:%s  生产厂家:%s  价格:%f\n", p0->name, p0->specification, p0->manufacturers, p0->prize);
				do
				{
					do
					{
						printf("***0:退出  1:药品名称  2:规格  3.:生产厂家  4:价格***\n");
						printf("请选择修改选项编号：");
						scanf("%d", &input);
						if (input > 0 && input < 5)//input在正确范围内
						{
							check = 0;
							switch (input)
							{
							case 1:printf("请输入修改后的内容：");
								scanf("%s", p0->name);
								printf("修改后数据：\n");
								printf("药品名称：%s  规格:%s  生产厂家:%s  价格:%f\n", p0->name, p0->specification, p0->manufacturers, p0->prize);
								break;
							case 2:printf("请输入修改后的内容：");
								scanf("%s", p0->specification);
								printf("修改后数据：\n");
								printf("药品名称：%s  规格:%s  生产厂家:%s  价格:%f\n", p0->name, p0->specification, p0->manufacturers, p0->prize);
								break;
							case 3:printf("请输入修改后的内容：");
								scanf("%s", p0->manufacturers);
								printf("修改后数据：\n");
								printf("药品名称：%s  规格:%s  生产厂家:%s  价格:%f\n", p0->name, p0->specification, p0->manufacturers, p0->prize);
								break;
							case 4:printf("请输入修改后的内容：");
								scanf("%f", &p0->prize);
								printf("修改后数据：\n");
								printf("药品名称：%s  规格:%s  生产厂家:%s  价格:%f\n", p0->name, p0->specification, p0->manufacturers, p0->prize);
								break;
							}
						}
						else if (input != 0)//非选择退出情况下选择错误的提醒
						{
							printf("输入错误！请重新输入！\n");
							check = 1;
						}
					} while (check);//进行正确修改后check==0
				} while (input);//满足input==0退出选项
			}
		}
		if (check)//未找到提醒
		{
			printf("没找到！！\n");
			printf("请重新输入：\n");
		}
	} while (check);//找到对应病人信息后check==0
	return head;
}
struct Patient* PatientModification(struct Patient* head)//病患信息修改
{
	int check = 1;
	int input = 0;//修改对象的具体的修改选项
	//system("cls");
	char name[50];//修改对象姓名
	system("cls");
	PatientDatePrint(head);//打印数据信息供管理员选择
	printf("接下来进行修改信息操作！!\n");
	printf("请输入修改对象姓名：");
	do
	{
		scanf("%s", name);
		for (struct Patient* p0 = head; p0 != NULL; p0 = p0->next)//遍历整个病人链表
		{
			if (strcmp(p0->name, name) == 0)//找到对应病人姓名
			{
				printf("找到\n");
				check = 0;
				//执行修改操作
				printf("姓名：%s  年龄：%d  性别:%s  电话号码：%lld  诊断结果：%s  治疗方案：%s\n", p0->name, p0->age, p0->sex, p0->number, p0->diagnosis, p0->schedule);
				do
				{
					do
					{
						printf("***0:退出  1:姓名  2:年龄  3.:性别  4:电话号码  5:诊断结果  6:治疗方案***\n");
						printf("请选择修改选项编号：");
						scanf("%d", &input);
						if (input > 0 && input < 7)//input在正确范围内
						{
							check = 0;
							switch (input)
							{
							case 1:printf("请输入修改后的内容：");
								scanf("%s", p0->name);
								printf("修改后数据：\n");
								printf("姓名：%s  年龄：%d  性别:%s  电话号码：%lld  诊断结果：%s  治疗方案：%s\n", p0->name, p0->age, p0->sex, p0->number, p0->diagnosis, p0->schedule);
								break;
							case 2:printf("请输入修改后的内容：");
								scanf("%d", &p0->age);
								printf("修改后数据：\n");
								printf("姓名：%s  年龄：%d  性别:%s  电话号码：%lld  诊断结果：%s  治疗方案：%s\n", p0->name, p0->age, p0->sex, p0->number, p0->diagnosis, p0->schedule);
								break;
							case 3:printf("请输入修改后的内容：");
								scanf("%s", p0->sex);
								printf("修改后数据：\n");
								printf("姓名：%s  年龄：%d  性别:%s  电话号码：%lld  诊断结果：%s  治疗方案：%s\n", p0->name, p0->age, p0->sex, p0->number, p0->diagnosis, p0->schedule);
								break;
							case 4:printf("请输入修改后的内容：");
								scanf("%lld", &p0->number);
								printf("修改后数据：\n");
								printf("姓名：%s  年龄：%d  性别:%s  电话号码：%lld  诊断结果：%s  治疗方案：%s\n", p0->name, p0->age, p0->sex, p0->number, p0->diagnosis, p0->schedule);
								break;
							case 5:printf("请输入修改后的内容：");
								scanf("%s", p0->diagnosis);
								printf("修改后数据：\n");
								printf("姓名：%s  年龄：%d  性别:%s  电话号码：%lld  诊断结果：%s  治疗方案：%s\n", p0->name, p0->age, p0->sex, p0->number, p0->diagnosis, p0->schedule);
								break;
							case 6:printf("请输入修改后的内容：");
								scanf("%s", p0->schedule);
								printf("修改后数据：\n");
								printf("姓名：%s  年龄：%d  性别:%s  电话号码：%lld  诊断结果：%s  治疗方案：%s\n", p0->name, p0->age, p0->sex, p0->number, p0->diagnosis, p0->schedule);
								break;
							}
						}
						else if (input != 0)//非选择退出情况下选择错误的提醒
						{
							printf("输入错误！请重新输入!\n");
							check = 1;
						}
					} while (check);//进行正确修改后check==0
				} while (input);//满足input==0退出选项
			}
		}
		if (check)//未找到提醒
		{
			printf("没找到\n");
			printf("请重新输入：\n");
		}
	} while (check);//找到对应病人信息后check==0
	return head;
}
struct Doctor* DoctorModification(struct Doctor* head)//修改医生信息
{
	int check = 1;
	int input = 0;//修改对象的具体的修改选项
	//system("cls");
	char name[50];//修改对象姓名
	system("cls");
	DoctorDatePrint(head);//打印数据信息供管理员选择
	printf("接下来进行修改信息操作！!\n");
	printf("请输入修改对象姓名：");
	do
	{
		scanf("%s", name);
		for (struct Doctor* p0 = head; p0 != NULL; p0 = p0->next)//遍历整个医生链表
		{
			if (strcmp(p0->name, name) == 0)//找到对应医生姓名
			{
				printf("找到\n");
				check = 0;
				//执行修改操作
				printf("姓名：%s  年龄：%d  性别:%s  电话号码：%lld  所属科室：%s  专业领域:%s  值班时间：%s\n", p0->name, p0->age, p0->sex, p0->number, p0->office, p0->field, p0->worktime);
				do
				{
					do
					{
						printf("***0:退出  1:姓名  2:年龄  3.:性别  4:电话号码  5:所属科室  6:专业领域  7:值班时间***\n");
						printf("请选择修改选项编号：");
						scanf("%d", &input);
						if (input > 0 && input < 8)//input在正确范围内
						{
							check = 0;
							switch (input)
							{
							case 1:printf("请输入修改后的内容：");
								scanf("%s", p0->name);
								printf("修改后数据：\n");
								printf("姓名：%s  年龄：%d  性别:%s  电话号码：%lld  所属科室：%s  专业领域:%s  值班时间：%s\n", p0->name, p0->age, p0->sex, p0->number, p0->office, p0->field, p0->worktime);
								break;
							case 2:printf("请输入修改后的内容：");
								scanf("%d", &p0->age);
								printf("修改后数据：\n");
								printf("姓名：%s  年龄：%d  性别:%s  电话号码：%lld  所属科室：%s  专业领域:%s  值班时间：%s\n", p0->name, p0->age, p0->sex, p0->number, p0->office, p0->field, p0->worktime);
								break;
							case 3:printf("请输入修改后的内容：");
								scanf("%s", p0->sex);
								printf("修改后数据：\n");
								printf("姓名：%s  年龄：%d  性别:%s  电话号码：%lld  所属科室：%s  专业领域:%s  值班时间：%s\n", p0->name, p0->age, p0->sex, p0->number, p0->office, p0->field, p0->worktime);
								break;
							case 4:printf("请输入修改后的内容：");
								scanf("%lld", &p0->number);
								printf("修改后数据：\n");
								printf("姓名：%s  年龄：%d  性别:%s  电话号码：%lld  所属科室：%s  专业领域:%s  值班时间：%s\n", p0->name, p0->age, p0->sex, p0->number, p0->office, p0->field, p0->worktime);
								break;
							case 5:printf("请输入修改后的内容：");
								scanf("%s", p0->office);
								printf("修改后数据：\n");
								printf("姓名：%s  年龄：%d  性别:%s  电话号码：%lld  所属科室：%s  专业领域:%s  值班时间：%s\n", p0->name, p0->age, p0->sex, p0->number, p0->office, p0->field, p0->worktime);
								break;
							case 6:printf("请输入修改后的内容：");
								scanf("%s", p0->field);
								printf("修改后数据：\n");
								printf("姓名：%s  年龄：%d  性别:%s  电话号码：%lld  所属科室：%s  专业领域:%s  值班时间：%s\n", p0->name, p0->age, p0->sex, p0->number, p0->office, p0->field, p0->worktime);
								break;
							case 7:printf("请输入修改后的内容：");
								scanf("%s", p0->worktime);
								printf("修改后数据：\n");
								printf("姓名：%s  年龄：%d  性别:%s  电话号码：%lld  所属科室：%s  专业领域:%s  值班时间：%s\n", p0->name, p0->age, p0->sex, p0->number, p0->office, p0->field, p0->worktime);
								break;
							}
						}
						else if (input != 0)//非选择退出情况下选择错误的提醒
						{
							printf("输入错误！请重新输入!\n");
							check = 1;
						}
					} while (check);//进行正确修改后check==0
				} while (input);//满足input==0退出选项
			}
		}
		if (check)//未找到提醒
		{
			printf("没找到！！\n");
			printf("请重新输入：\n");
		}
	} while (check);//找到对应医生信息后check==0
	return head;
}
struct Patient* PaymentModification(struct Patient* head)//收费信息修改
{
	int check = 0;
	char name[50];
	struct Patient* p0 = head;
	do
	{
		system("cls");
		PaymentPrint(head);
		if (check)
		{
			printf("无该对象！！请重新输入！！\n");
		}
		printf("请输入修改对象:");
		scanf("%s", name);
		for (p0 = head; p0->next != NULL && strcmp(p0->name, name) != 0; p0 = p0->next);//到最后一个或找到对象时停
		{
		}
		if (strcmp(p0->name, name) == 0)//找到
		{
			check = 0;//找到时不满足循环条件
			system("cls");
			printf("%s %s\n", p0->name, p0->payment);
			printf("请输入修改后内容:");
			scanf("%s", p0->payment);
			//进行修改
		}
		else
		{
			check = 1;
		}
	} while (check);
	return head;
}