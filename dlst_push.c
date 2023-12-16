#include "push_swap.h"

void	pb(t_dlst *a, t_dlst *b)
{
	t_dlst	*x;

	if (a -> next == a)
		return ;
	x = a -> next;
	a -> next = a -> next -> next;
	a -> next -> prev = a;
	x -> next = b -> next;
	x -> next -> prev = x;
	b -> next = x;
	x -> prev = b;
}

