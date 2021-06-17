#include <stdlib.h>
#include "list.h"

int add_link(t_list **list, char *str)
{
	*list = malloc();
}

int main(void)
{
	t_list *list;

	list = NULL;

	add_link(&list, "titi\n");

	list = add_link(list, "toto\n");
	list = add_link(list, "tata\n");
	list = add_link(list, "tutu\n");

	print_list(list);

	return (0);
}

