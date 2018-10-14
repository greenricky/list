#include "list.h"
#include <stdlib.h>
#include <stdio.h>

LIST *make_list(int *p, unsigned int n)
{
	int i=0;
	LIST *head = NULL, *cur = NULL, *next = NULL;

	if(NULL==p || 0==n)
		return NULL;

	head = (LIST *)malloc(sizeof(LIST));
	if(NULL == head)
		return NULL;
	head->d = p[0];
	head->next = NULL;
	cur = head;

	for(i=1; i<n; i++)
	{
		next = (LIST *)malloc(sizeof(LIST));
		next->d = p[i];
		next->next = NULL;
		
		cur->next = next;
		cur = cur->next;
	}

	return head;
}

LIST *list_cat(LIST *l1, LIST *l2)
{
	LIST *l1_head = l1, *l1_last = NULL;
	if(NULL == l1)
		return NULL;
	if(NULL == l2)
		return l1;

	
	while(NULL != l1)
	{
		l1_last = l1;
		l1 = l1->next;
	}
	
	while(NULL != l2)
	{
		l1_last->next  = l2;
		l1_last = l2;
		l2 = l2->next;
	}
	
	return l1_head;
}

void list_print(LIST *l1)
{
	while(NULL != l1)
	{
		printf("%d -> ", l1->d);
		l1 = l1->next;
	}
	printf("NULL\n");
}



