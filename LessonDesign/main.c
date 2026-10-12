#define _CRT_SECURE_NO_WARNINGS
#include"function.h"
#define Passward  123456
int main()
{
	struct Patient *phead= PatientCreat();//创建病患链表
	struct Doctor *dhead =DoctorCreat();//创建医生链表
	struct Drug* drhead = DrugCreat();//创建药品链表
	struct RegistrationMember* rhead=RegistrationMemberCreat();//创建挂号链表

	DoctorFileRead(dhead);//读取医生信息
	PatientFileRead(phead);//读取病患信息
	DrugFileRead(drhead);//读取药品信息
	RegistrationMemberFileRead(rhead);//读取挂号信息

	


	int num = 0;//选择访问身份编号
	long passward = 0;//管理员密码
	int ad_input = 0;//管理员访问选项
	int check = 1;
	do
	{
		system("cls");
		if (num > 2 || num < 0)//num不在范围内时循环提醒
			printf("输入错误！！请重新输入！！\n");
		MainInterface();//打印主界面并要求选择身份
		scanf("%d", &num);
		switch (num)
		{
		case 0:printf("欢迎用户！！！\n");
			//用户可操作界面
			rhead=UserSystem(rhead,dhead,phead);
			break;
		case 1://管理员可操作内容
			ad_input = 0;
			check = 1;
			printf("请输入密码：");
			scanf("%ld", &passward);
			if (passward == Passward)
			{
				printf("欢迎管理员！！！\n");
				//管理员可操作界面
				system("cls");
				AdministrationInterface();
				while (check)
				{
					check = 0;
					scanf("%d", &ad_input);
					if (ad_input > 5|| ad_input <0)//访问选项错误时满足循环条件
					{
						printf("输入错误！请重新输入！\n");
						printf("请输入操纵号码：");
						check = 1;
					}
				}
				switch (ad_input)
				{
				case 0:break;
				case 1://医生信息管理
					dhead=DoctorAdministration(dhead);
					break;
				case 2://病患信息管理
					phead = PatientAdministration(phead);
					break;
				case 3://药物信息管理
					drhead = DrugAdministration(drhead);
					break;
				case 4://挂号信息管理
					rhead = RegistrationMemberAdministration(rhead);
					break;
				case 5://费用信息管理
					phead = PaymentAdministration(phead);
					printf("进行费用管理\n");
					break;
				}
			}
			else
			{
				printf("密码输入错误！！！\n");
			}
			break;
		default:
			if (num != 3)
			{
				system("cls");
				printf("请输入正确号码！！\n");
			}
		}
	} while (num!=3);
	RegistrationMemberFileWrite(rhead);//最后将各组数据写入txt文件
	DrugFileWrite(drhead);
	PatientFileWrite(phead);
	DoctorFileWrite(dhead);
	return 0;
}