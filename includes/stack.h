#ifndef STACk
# define STACk

#include "corekit.h"

typedef struct s_stack {
	int value;
	t_stack *next;
	t_stack *prev;
} t_stack;

//Check if the stack is empty
t_bool			ft_is_stack_empty(t_stack *stack);

//Return new node pointer, so the new top
t_stack			*ft_push(t_stack *stack, int new_value);

//Remove and return the value of the top element in the stack
int				ft_pop(t_stack *stack);

//Return the top element in the stack without removing it
t_stack			*ft_get_top(t_stack *statck);

//Print in the termial the stack, starting from top
void			display(t_stack *stack);

#endif