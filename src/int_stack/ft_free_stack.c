/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maceccar <maceccar@student.42firenze.it>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 18:40:17 by maceccar          #+#    #+#             */
/*   Updated: 2024/10/17 15:35:45 by maceccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

void	ft_free_stack(t_stack *stack)
{
	t_stack_node	*temp;

	if (ft_is_stack_empty(stack) == false)
	{
		temp = stack->head;
		while (temp != NULL)
		{
			stack->head = stack->head->next;
			free(temp);
			temp = stack->head;
		}
	}
	if (stack)
		free(stack);
}
