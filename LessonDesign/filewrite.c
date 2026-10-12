#define _CRT_SECURE_NO_WARNINGS
#include"function.h"
int RegistrationMemberFileWrite(struct RegistrationMember* head)//挂号数据写入文件
{
	FILE* fp = NULL;
	fp = fopen("registrtion.txt", "w");
	if (fp == NULL)
	{
		printf("%s\n", strerror(errno));
		return -1;
	}
	else
	{
		for (struct RegistrationMember* p0 = head; p0 != NULL; p0 = p0->next)
		{
			fprintf(fp, "%-15s %-15s	%d	%lld	%-15s %-15s %-15s\n", p0->name, p0->sex, p0->age, p0->number, p0->symptom, p0->docname, p0->intime);
		}
	}
	fclose(fp);
	fp = NULL;
	return 0;
}
int DrugFileWrite(struct Drug* head)//药品数据写入文件
{
	FILE* fp = NULL;
	fp = fopen("drug.txt", "w");
	if (fp == NULL)
	{
		printf("%s\n", strerror(errno));
		return -1;
	}
	else
	{
		for (struct Drug* p0 = head; p0 != NULL; p0 = p0->next)
		{
			fprintf(fp, "%-15s %-15s %-15s		%.2f\n", p0->name, p0->specification, p0->manufacturers, p0->prize);
		}
	}
	fclose(fp);
	fp = NULL;
	return 0;
}
int PatientFileWrite(struct Patient* head)//病患数据写入文件
{
	FILE* fp = NULL;
	fp = fopen("patient.txt", "w");
	if (fp == NULL)
	{
		printf("%s\n", strerror(errno));
		return -1;
	}
	else
	{
		for (struct Patient* p0 = head; p0 != NULL; p0 = p0->next)
		{
			fprintf(fp, "%-15s	%d	%-15s	%lld	%-15s %-15s %-15s\n", p0->name, p0->age, p0->sex, p0->number, p0->diagnosis, p0->schedule, p0->payment);
		}
	}
	fclose(fp);
	fp = NULL;
	return 0;
}
int DoctorFileWrite(struct Doctor* head)//医生数据写入文件
{
	FILE* fp = NULL;
	fp = fopen("doctor.txt", "w");
	if (fp == NULL)
	{
		printf("%s\n", strerror(errno));
		return -1;
	}
	else
	{
		for (struct Doctor* p0 = head; p0 != NULL; p0 = p0->next)
		{
			fprintf(fp, "%-15s	%d	%-15s	%lld	%-15s %-15s %-15s\n", p0->name, p0->age, p0->sex, p0->number, p0->office, p0->field, p0->worktime);
		}
	}
	fclose(fp);
	fp = NULL;
	return 0;
}