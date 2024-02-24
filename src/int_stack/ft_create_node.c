#include "stack.h"

t_stack_node	*ft_create_node(int value)
{
	t_stack_node	*node;

	node = malloc(sizeof(t_stack_node));
	if (!node)
		return (node);
	node->value = value;
	node->prev = NULL;
	node->next = NULL;
	return (node);
}
