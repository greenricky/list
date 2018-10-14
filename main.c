#include "list.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
	int arr[] = {3,4,5};
	LIST *common = make_list(arr, sizeof(arr)/sizeof(arr[0]));
	list_print(common);
	
	int arr_1[] = {1,2};
	LIST *l1 = make_list(arr_1, sizeof(arr_1)/sizeof(arr_1[0]));
	list_print(l1);

	list_cat(l1, common);
	list_print(l1);
	
	int n_data = 0;
	int ret = find_1st_cross_point(common, l1, &n_data);

	printf("%d - %d\n", ret, n_data);
	return 1;
}
