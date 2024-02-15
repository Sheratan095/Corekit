/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search_duplicate.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maceccar <maceccar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 16:19:23 by maceccar          #+#    #+#             */
/*   Updated: 2024/02/07 16:19:23 by maceccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

t_bool	ft_search_duplicate(t_stack *stack)
{
	t_stack	*tmp;

	if (!stack)
		return (false);
	tmp = stack;
	while (tmp)
	{
		if (ft_stack_contains(tmp->next, tmp->value))
			return (true);
		tmp = tmp->next;
	}
	return (false);
}
