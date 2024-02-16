/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_stack.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maceccar <maceccar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 16:19:23 by maceccar          #+#    #+#             */
/*   Updated: 2024/02/07 16:19:23 by maceccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "corekit.h"

//Se lo stack è vuoto -> return
void	ft_free_stack(t_stack *stack)
{
	t_stack	*temp;

	while (stack->next != NULL)
	{
		temp = stack;
		stack = stack->next;
		free(temp);
	}
	free(stack);
}
