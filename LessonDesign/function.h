#pragma once
#include<stdio.h>
#include<errno.h>
#include<stdlib.h>
#include<string.h>
struct Drug//药物结构体
{
	char name[100];
	char specification[100];
	char manufacturers[100];
	float prize;
	struct Drug* next;
}; 
struct Patient//患者结构体
{
	char name[100];
	int age;
	char sex[10];
	long long number;
	char diagnosis[100];
	char schedule[100];
	char payment[100];//收费信息
	struct Patient* next;
};
struct Doctor//医生结构体
{
	char name[100];
	int age;
	char sex[10];
	long long number;
	char office[100];
	char field[100];
	char worktime[100];
	struct Doctor* next;
};
struct RegistrationMember//挂号结构体
{
	char name[20];
	char sex[10];
	int age;
	long long number;
	char symptom[100];
	char docname[50];
	char intime[50];
	struct RegistrationMember* next;
};


void MainInterface();//打印主界面
void AdministrationInterface();//打印管理员界面
void UserInterface();//打印用户界面
int CountFileLines(const char* filename);//计算文件数据行数,传文件名

struct Patient* PatientCreat();//创建病人链表
int PatientFileRead(struct Patient* head);//读取文件内病人信息
int PatientFileWrite(struct Patient* head);//病人信息写入文件
int PatientDatePrint(struct Patient* head);//打印病人信息
struct Patient* PatientAdministration(struct Patient*head);//病人信息管理
struct Patient* PatientModification(struct Patient* head);//修改病人信息
struct Patient* PatientAddition(struct Patient* head);//添加病人信息
struct Patient* PatientDelete(struct Patient* head);//删除病人信息


struct Doctor* DoctorCreat();//创建医生链表
int DoctorFileRead(struct Doctor* head);//读取文件内医生信息
int DoctorFileWrite(struct Doctor* head);//医生信息写入文件
int DoctorDatePrint(struct Doctor* head);//打印医生信息
struct Doctor* DoctorAdministration(struct Doctor* head);//医生信息管理
struct Doctor* DoctorModification(struct Doctor*p0);//修改医生信息
struct Doctor* DoctorAddition(struct Doctor* head);//添加医生信息
struct Doctor* DoctorDelete(struct Doctor* head);//删除医生信息

struct Drug* DrugCreat();//创建药品链表
int DrugFileRead(struct Drug* head);//读取文件内药品信息
int DrugFileWrite(struct drug* head);//药品信息写入文件
int DrugDatePrint(struct Drug* head);//打印药品信息
struct Drug* DrugAdministration(struct Drug* head);//药品信息管理
struct Drug* DrugModification(struct Drug* head);//修改药品信息
struct Drug* DrugAddition(struct Drug* head);//添加药品信息
struct Drug* DrugDelete(struct Drug* head);//删除药品信息


struct RegistrationMember* RegistrationMemberCreat();//创建挂号链表
int RegistrationMemberFileRead(struct RegistrationMember* head);//读取文件内挂号信息
int RegistrationMemberFileWrite(struct RegistrationMember* head);//挂号信息写入文件
int RegistrationMemberPrint(struct RegistrationMember* head);//打印挂号信息
struct RegistrationMember* RegistrationMemberAdministration(struct RegistrationMember* head);//挂号信息管理
struct RegistrationMember* RegistrationMemberModification(struct RegistrationMember* head);//修改挂号信息
struct RegistrationMember* RegistrationMemberDelete(struct RegistrationMember* head);//删除挂号信息

struct RegistrationMember* UserSystem(struct RegistrationMember* rhead, struct Doctor* dhead, struct Patient* phead);//用户操作系统
struct RegistrationMember* RegistrationSystem(struct Doctor* dhead, struct RegistrationMember* rhead);//用户挂号系统
struct RegistrationMember* RegistrationSingleMemberCreat(struct RegistrationMember* head, struct Doctor* p1);//挂号创建新的链表成员
struct RegistrationMember* RegistrationCheck(struct RegistrationMember*head);//用户查看挂号信息
struct Patient* PaymentCheck(struct Patient* head);//用户查看收费信息
   
struct Patient* PaymentAdministration(struct Patinet* head);//收费信息管理
void PaymentPrint(struct Patient* head);//打印收费信息
struct Patient* PaymentModification(struct Patient* head);//修改收费信息

int GetLength(struct Drug* head);//获取链表长度
struct Drug* Merge(struct Drug* head1, struct Drug* head2);//拼接两段有序链表
struct Drug* Sort(struct Drug* head);
