#include "push_swap.h"

t_dlst	*createNode(long value)
{
	t_dlst	*newNode;
	
	newNode = (t_dlst *)malloc(sizeof(t_dlst));
	if (newNode == NULL)
		ft_error();
	newNode -> value = value;
	newNode -> next = newNode;
	newNode -> prev = newNode;
	return (newNode);
}

t_dlst	*createSentinel()
{
	t_dlst	*sentinel;

	sentinel = createNode(0);
	sentinel -> next = sentinel;
	sentinel -> prev = sentinel;
	return (sentinel);
}

void	appendNode(t_dlst *sentinel, t_dlst *newNode)
{
	newNode -> prev = sentinel -> prev;
	newNode -> next = sentinel;
	sentinel -> prev -> next = newNode;
	sentinel -> prev = newNode;
}
