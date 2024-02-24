/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_queue.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 11:11:30 by lebartol          #+#    #+#             */
/*   Updated: 2024/02/21 17:10:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

//Creazione di un nuovo nodo
//Memcheck
//Assegnazione valori di default
//Se lo stack non è vuoto
//	il nuovo nodo va linkato a quello successivo e viceversa
//Altrimenti
//	lo stack diventa il nuovo nodo
t_stack	*ft_push_tail(t_stack *stack, int new_value)
{
	t_stack_node	*new_tail;

	new_tail = ft_create_node(new_value);
	if (ft_is_stack_empty(stack))
		return (ft_push(stack, new_value));
	new_tail->value = new_value;
	new_tail->prev = stack->tail;
	stack->tail->next = new_tail;
	new_tail->next = NULL;
	stack->tail = new_tail;
	stack->length++;
	return (stack);
}
