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

long	len_dlst(t_dlst *list)
{
	long	x;
	t_dlst	*start;
	t_dlst	*now;

	x = 0;
	start = list;
	now = list;
	while (1)
	{
		now = now->next;
		if (now == start)
			break;
		x++;
	}
	return (x);
}

int	get_maximum(t_dlst *list)
{
	int		x;
	t_dlst	*start;
	t_dlst	*now;

	x = INT_MIN;
	start = list;
	now = list;
	while (1)
	{
		now = now->next;
		if (now==start)
			break;
		if (now->value > x)
			x = now->value;
	}
	return (x);
}

int	get_minimum(t_dlst *list)
{
	int		x;
	t_dlst	*start;
	t_dlst	*now;

	x = INT_MAX;
	start = list;
	now = list;
	while (1)
	{
		now = now->next;
		if (now==start)
			break;
		if (now->value < x)
			x = now->value;
	}
	return (x);
}
