#include "push_swap.h"

void	algo_naive(t_dlst *a, t_dlst *b)
{
	int	a_min;

	a_min = get_minimum(a);
	while (len_dlst(a) > 0)
	{
		while (a_min != a->next->value)
			ra(a);
		pb(a, b);
		a_min = get_minimum(a);
	}
	while (len_dlst(b) > 0)
		pb(b, a);
}
