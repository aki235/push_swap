#include "push_swap.h"

void printList(t_dlst *sentinel) {
    if (sentinel == NULL) {
        return;
    }
    t_dlst *current = sentinel->next;
    while (current != sentinel) {
        printf("%ld ", current->value);
        current = current->next;
    }
    printf("\n");
}

int main(int argc, char *argv[])
{
	int		is_error;
	t_dlst	*a;
	t_dlst	*b;
	t_dlst	*newNode;
	int		val;

	is_error = 0;
	a = createSentinel();
	b = createSentinel();
	for (int i = 1; i < argc; i++)
	{
		val = ft_atoi(argv[i], &is_error);
		if (is_error == 1)
			ft_error();
		newNode = createNode(val);
		appendNode(a, newNode);
	}
	printf("a: ");
	printList(a);
	printf("b: ");
	printList(b);
	rra(a);
	printf("a: ");
	printList(a);
	printf("b: ");
	printList(b);

}