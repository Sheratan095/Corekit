/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_contains.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maceccar <maceccar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 16:19:23 by maceccar          #+#    #+#             */
/*   Updated: 2024/02/07 16:19:23 by maceccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

t_bool	ft_stack_contains(t_stack *stack, int value)
{
	t_stack	*tmp;

	if (!stack)
		return (false);
	tmp = stack;
	while (tmp)
	{
		if (tmp->value == value)
			return (true);
		tmp = tmp->next;
	}
	return (false);
}
