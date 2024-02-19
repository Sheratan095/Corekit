/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maceccar <maceccar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 16:19:23 by maceccar          #+#    #+#             */
/*   Updated: 2024/02/07 16:19:23 by maceccar         ###   ########.fr       */
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
	t_stack_node	*new_node;

	new_node = malloc(sizeof(t_stack_node));
	if (!new_node)
		return (NULL);
	new_node->prev = NULL;
	new_node->value = new_value;
	if (ft_is_stack_empty(stack))
	{
		new_node->next = NULL;
		stack->head = new_node;
	}
	else
	{
		new_node->next = stack->head;
		new_node->prev = NULL;
		stack->head = new_node;
	}
	return (stack);
}
