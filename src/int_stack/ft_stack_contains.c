/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_contains.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maceccar <maceccar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 15/02/2024 17:15:20 by maceccar          #+#    #+#             */
/*   Updated: 24/02/2024 19:46:19 by maceccar         ###   ########.fr       */
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
