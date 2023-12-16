#include "push_swap.h"

void	sa(t_dlst *sentinel)
{
	t_dlst	*first;
	t_dlst	*second;
	t_dlst	*third;

	if (sentinel -> next == sentinel)
		return ;
	if (sentinel -> next -> next == sentinel)
		return ;
	first = sentinel -> next;
	second = first -> next;
	third = second -> next;
	sentinel -> next = second;
	second -> prev = sentinel;
	second -> next = first;
	first -> prev = second;
	first -> next = third;
	third -> prev = first;
}

