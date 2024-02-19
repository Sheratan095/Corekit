/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pop_tail.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebartol <lebartol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 17:14:49 by lebartol          #+#    #+#             */
/*   Updated: 2024/02/19 17:16:23 by lebartol         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

int	ft_pop_tail(t_stack *stack)
{
	t_stack_node	*temp;
	int				result;

	if (ft_is_stack_empty(stack))
		return (0);
	temp = stack->tail;
	result = temp->value;
	stack->tail = stack->tail->prev;
	if (stack->tail != NULL)
		stack->tail->next = NULL;
	free(temp);
	stack->length--;
	return (result);
}