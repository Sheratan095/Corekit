/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_stack.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maceccar <maceccar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 14/02/2024 01:34:18 by maceccar          #+#    #+#             */
/*   Updated: 24/02/2024 19:46:19 by maceccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void	ft_display_stack(t_stack *stack)
{
	t_stack_node	*temp;

	if (ft_is_stack_empty(stack))
	{
		ft_printf("Stack is empty\n");
		return ;
	}
	temp = stack->head;
	while (temp != NULL)
	{
		ft_printf("%i\n", temp->value);
		temp = temp->next;
	}
}
