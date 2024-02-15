/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search_duplicate.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 16:34:52 by marvin            #+#    #+#             */
/*   Updated: 2024/02/15 16:34:52 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

t_bool	ft_search_duplicate(t_stack *stack)
{
	while (stack)
	{
		if (ft_stack_contains(stack->value, stack->next))
			return (true);
		stack = stack->next;
	}
	return (false);
}
