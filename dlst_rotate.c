#include "push_swap.h"

void	ra(t_dlst *a)
{
	t_dlst	*first;
	t_dlst	*second;

	if (a -> next == a)
		return ;
	if (a -> next -> next == a)
		return ;
	first = a -> next;
	second = first -> next;
	a -> prev -> next = first;
	first -> prev = a -> prev;
	first -> next = a;
	second -> prev = a;
	a -> prev = first;
	a -> next = second;
}
