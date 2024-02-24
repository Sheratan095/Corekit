/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maceccar <maceccar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 14/02/2024 01:34:18 by maceccar          #+#    #+#             */
/*   Updated: 24/02/2024 19:46:19 by maceccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.h"

//Creazione di un nuovo nodo
//Memcheck
//Assegnazione valori di default
//Se lo stack non è vuoto
//	il nuovo nodo va linkato a quello precendente e viceversa
//Altrimenti
//	lo stack diventa il nuovo nodo
t_stack	*ft_push(t_stack *stack, int new_value)
{
	t_stack_node	*updated_head;

	updated_head = ft_create_node(new_value);
	if (ft_is_stack_empty(stack))
	{
		stack->head = updated_head;
		stack->tail = stack->head;
	}
	else
	{
		updated_head->next = stack->head;
		stack->head->prev = updated_head;
		stack->head = updated_head;
	}
	stack->length++;
	return (stack);
}
