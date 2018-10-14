//routine: 2 lists, find the first cross point
#include <stdio.h>
#include "list.h"

/*
1st para - input: l1 - the 1st list
2nd para - input: l2 - the 2nd list
3rd para - ouput : n_data - will be store the value of corss point

return value:
0: find the corss point
1: not find the corss point
-1: the input para have error
*/
int find_1st_cross_point(LIST *l1, LIST *l2, int *n_data)
{
	int len1=0, len2=0, delta = 0;
	LIST *t1 = l1, *t2 = l2;

	if(NULL==l1 || NULL==l2)
		return -1;

	//1. get the len of each list
	while(NULL != t1)	
	{
		len1++;
		t1 = t1->next;
	}
	while(NULL != t2)
	{
		len2++;
		t2 = t2->next;
	}

	//2. shife backward delta step of list which is longer
	if(len1 > len2)
	{
		delta = len1-len2;
		while(delta-- > 0)
			l1 = l1->next;
	}
	else if(len2 > len1)
	{
		delta = len2-len1;
		while(delta-- > 0)
			l2 = l2->next;
	}

	//3. compare each node of 2 lists
	while( NULL!=l1 || NULL!=l2 )
	{
		if(l1==l2)
		{
			*n_data = l1->d;
			return 0;
		}
		else
		{
			l1 = l1->next;
			l2 = l2->next;
		}
	}

	printf("can't find a cross point\n");
	return 1;
}
