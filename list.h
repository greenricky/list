typedef struct list 
{ 
    int d; 
    struct list *next; 
}LIST; 

LIST *make_list(int *p, unsigned int n);
LIST *list_cat(LIST *l1, LIST *l2);
void list_print(LIST *l1);
int find_1st_cross_point(LIST *l1, LIST *l2, int *n_data);

