typedef struct list 
{ 
    int d; 
    struct list *next; 
}LIST; 

typedef int bool;
#define true 1
#define false 0

LIST *make_list(int *p, unsigned int n);
LIST *list_cat(LIST *l1, LIST *l2);
void list_print(LIST *l1);
int find_1st_cross_point(LIST *l1, LIST *l2, int *n_data);

LIST *reverse_list(LIST *head);

typedef bool (* DEL_CHK)(LIST *node);
void list_delete_node(LIST **head, DEL_CHK fun);

LIST *merge_2_sorted_list(LIST *l1, LIST *l2);
