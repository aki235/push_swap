#include "push_swap.h"

void	rra(t_dlst *a)
{
	t_dlst	*back_first;
	t_dlst	*back_second;

	if (a -> next == a)
		return ;
	if (a -> next -> next == a)
		return ;
	back_first = a -> prev;
	back_second = back_first -> prev;
	back_second -> next = a;
	back_first -> prev = a;
	back_first -> next = a -> next;
	a -> next -> prev = back_first;
	a -> prev = back_second;
	a -> next = back_first;
}
