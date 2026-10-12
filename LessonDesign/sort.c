#define _CRT_SECURE_NO_WARNINGS
#include"function.h"
int GetLength(struct Drug* head)//获取链表长度
{
	int count = 0;
	struct Drug* p0 = head;
	for (p0 = head; p0 != NULL; p0 = p0->next)
	{
		count++;
	}
	return count;
}
struct Drug* Merge(struct Drug* head1, struct Drug* head2)//合并两段有序链表
{
	struct Drug* p1 = head1;
	struct Drug* p2 = head2;

	struct Drug dummy;
	struct Drug* tail = &dummy;
	dummy.next = NULL;
	
	while (p1&&p2)
	{
		if (p1->prize >= p2->prize)//从大到小
		{
			tail->next = p1;
			p1 = p1->next;
		}
		else
		{
			tail->next = p2;
			p2 = p2->next;
		}
		tail = tail->next;
	}
	tail->next = p1 ? p1 : p2;
	return dummy.next ;
}
struct Drug* Sort(struct Drug* head)//归并主体
{
	if (head==NULL || head->next==NULL)
	{
		return head;
	}
	int length = GetLength(head);
	struct Drug dummy;
	dummy.next = head;

	for (int step = 1; step < length; step = step * 2)
	{
		struct Drug* pre = &dummy;
		struct Drug* curr = dummy.next;
		while (curr)
		{
			struct Drug* left = curr;

			for (int i = 1; i < step&&curr->next ; i++)
			{
				curr = curr->next;
			}

			struct Drug* right = curr->next;
			curr->next = NULL;
			curr = right;

			for (int i = 1; i < step && curr->next && curr;i++)
			{
				curr = curr->next;
			}

			struct Drug* next = NULL;
			if (curr)
			{
				next = curr->next;
				curr->next = NULL;
			}
			
			pre->next = Merge(left, right);
			while (pre->next )
			{
				pre = pre->next;
			}
			curr = next;
		}
	}
	return dummy.next;
}