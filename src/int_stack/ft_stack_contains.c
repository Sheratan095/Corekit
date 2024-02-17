/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_contains.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 16:19:23 by maceccar          #+#    #+#             */
/*   Updated: 2024/02/18 00:37:06 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

t_bool	ft_stack_contains(t_stack *stack, int value)
{
	t_stack_node	*temp;

	if (ft_is_stack_empty(stack))
		return (false);
	temp = stack->head;
	while (temp != NULL)
	{
		if (temp->value == value)
			return (true);
		temp = temp->next;
	}
	return (false);
}
