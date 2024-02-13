
#include "stack.h"

t_bool			ft_is_stack_empty(t_stack *stack)
{
	if (stack->next == NULL && stack->prev == NULL)
		return (true);
	return (false);
}