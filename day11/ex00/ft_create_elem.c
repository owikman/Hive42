#include <stdlib.h>
#include "ft_list.h"

 t_list *ft_create_elem(void *data)
 {
	 t_list *elem;							// create a block/an element, name the size of t_list size elem

	 if(!(elem = malloc(sizeof(t_list))))	// we allocate memory through malloc, open the size of t_list
	 		return NULL;					// if no element return 0
	elem->data = data;						// elem has the same ingredients as t_list, data & next. and name it data
	elem-> next = NULL;						// elem has next, and we point it to NULL
	return (elem);							// return our element
 }
int main(void)
{
	t_list *list;

	list = NULL;

	list = ft_create_elem("toto\n");

	print_list(list);

	return (0);
}
