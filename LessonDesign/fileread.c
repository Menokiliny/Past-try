#define _CRT_SECURE_NO_WARNINGS
#include"function.h"
int CountFileLines(const char* filename) //计算文件数据行数
{
	FILE* file = fopen(filename, "r");
	if (file == NULL) //不存在文件返回
	{
		printf("%s\n", strerror(errno));
		return -1;
	}

	int lineCount = 0;
	int ch;
	int prevChar = '\n';  // 初始化为换行符，这样空文件行数为0

	while ((ch = fgetc(file)) != EOF)
	{
		if (ch == '\n')
		{
			lineCount++;
		}
		prevChar = ch;
	}

	// 如果文件不以换行符结尾，但最后一行有内容，则要加1
	if (prevChar != '\n' && prevChar != EOF) {
		lineCount++;
	}

	fclose(file);
	return lineCount;
}
int RegistrationMemberFileRead(struct RegistrationMember* head)//读取文件内挂号信息
{
	FILE* fp;
	fp = fopen("registrtion.txt", "r");
	if (fp == NULL)
	{
		printf("%s\n", strerror(errno));
		return -1;
	}
	else
	{
		do
		{
			int ret = fscanf(fp, "%99s %99s %d %lld %s %s %s", head->name, head->sex, &head->age, &head->number, head->symptom, head->docname, head->intime);
			head = head->next;
		} while (head != NULL);
		fclose(fp);
		fp = NULL;
		printf("\n");
	}
	return 0;
}
int DrugFileRead(struct Drug* head)//药品文件信息读取
{
	FILE* fp;
	fp = fopen("drug.txt", "r");
	if (fp == NULL)
	{
		printf("%s\n", strerror(errno));
		return -1;
	}
	else
	{
		do
		{
			int ret = fscanf(fp, "%99s %99s %99s %f", head->name, head->specification, head->manufacturers, &head->prize);
			head = head->next;
		} while (head != NULL);
		fclose(fp);
		fp = NULL;
		printf("\n");
	}
	return 0;
}
int PatientFileRead(struct Patient* head)//病人文件信息读取
{
	FILE* fp;
	fp = fopen("patient.txt", "r");
	if (fp == NULL)
	{
		printf("%s\n", strerror(errno));
		return -1;
	}
	else
	{
		do
		{
			int ret = fscanf(fp, "%s %d %s %lld %s %s %s", head->name, &head->age, head->sex, &head->number, head->diagnosis, head->schedule, head->payment);
			head = head->next;
		} while (head != NULL);
		fclose(fp);
		fp = NULL;
		printf("\n");
	}
	return 0;
}
int DoctorFileRead(struct Doctor* head)//医生文件信息读取
{
	FILE* fp;
	fp = fopen("doctor.txt", "r");
	if (fp == NULL)
	{
		printf("%s\n", strerror(errno));
		return -1;
	}
	else
	{
		do
		{
			int ret = fscanf(fp, "%s %d %s %lld %s %s %s", head->name, &head->age, head->sex, &head->number, head->office, head->field, head->worktime);
			head = head->next;
		} while (head != NULL);
		fclose(fp);
		fp = NULL;
		printf("\n");
	}
	return 0;
}