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
t_stack	*ft_queue(t_stack *stack, int new_value)
{
	if (ft_is_stack_empty(stack))
		return(ft_push(stack, new_value));
	
	t_stack_node *new_node = malloc(sizeof(t_stack_node));
	if (!new_node)
		return (NULL);

	new_node->value = new_value;
	new_node->prev = stack->tail;
	stack->tail->next = new_node;
	new_node->next = NULL;
	stack->tail = new_node;
	stack->length++;
	return (stack);
}