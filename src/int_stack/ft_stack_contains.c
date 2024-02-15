/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_contains.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 16:44:09 by marvin            #+#    #+#             */
/*   Updated: 2024/02/15 16:44:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

t_bool	ft_stack_contains(int value, t_stack *stack)
{
	t_stack tmp = stack; 
	while (tmp)
	{
		if (tmp->value == value)
			return (true);
		tmp = tmp->next;
	}
	return (false);
}