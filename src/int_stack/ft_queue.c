/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_queue.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lebartol <lebartol@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 11:11:30 by lebartol          #+#    #+#             */
/*   Updated: 2024/02/19 16:46:45 by lebartol         ###   ########.fr       */
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
	t_stack_node	*new_node;

	new_node = malloc(sizeof(t_stack_node));
	if (!new_node)
		return (NULL);
	new_node->next = NULL;
	new_node->value = new_value;
	if (ft_is_stack_empty(stack))
	{
		new_node->prev = NULL;
		stack->head = new_node;
	}
	else
	{
		new_node->prev = stack->tail;
		new_node->next = NULL;
		stack->head = new_node;
	}
	stack->length++;
	return (stack);
}