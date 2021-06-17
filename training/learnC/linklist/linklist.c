#include <stdlib.h>
#include <stdio.h>

void	ft_putchar(char c);

void	ft_putstr(char const *s);

struct	node
{
	int value;
	struct node *next;
};
typedef	struct		node node_t;

void 	printlist(node_t *head)
{
	node_t *temp = head;

	while (temp != NULL)
	{
		printf("%d - ", temp->value);
		temp = temp->next;
	}
	printf("\n");
}

int 	main()
{
	node_t n1, n2, n3;
	node_t *head;

	n1.value = 45;
	n2.value = 8;
	n3.value = 32;

	head = &n1;
	n3.next = NULL;
	n2.next = &n3;
	n1.next = &n2;  // so we know when to stop

	node_t n4;
	n4.value = 13;
	n4.next = &n3;
	n2.next = &n4;

	head = head->next;

	printlist(head);

	return (0);
}