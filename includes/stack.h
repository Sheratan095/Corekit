/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maceccar <maceccar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 16:19:23 by maceccar          #+#    #+#             */
/*   Updated: 2024/02/07 16:19:23 by maceccar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H

# include "corekit.h"

/**
	Struct used for the dubly linked list of int

	Circular dependency: con't use t_stack because it isn't still defined
			This will result in a compilation error because the compiler
			doesn't know what t_stack is at that point.
*/
typedef struct s_stack
{
	int				value;
	struct s_stack	*next;
	struct s_stack	*prev;
}	t_stack;

/**
	@brief Add new node to the stack
	@param stack pointer to stack top element 
	@param new_value value to assign to the new node
	@return New top node pointer of the stack
*/
t_stack		*ft_push(t_stack *stack, int new_value);

/**
	@brief Remove top element of the stack
	@param stack pointer to stack top element 
	@return New top node pointer of the stack
*/
t_stack		*ft_pop(t_stack *stack);

/**
	@brief Print in the termial the stack, starting from top
	@param stack pointer to stack top element 
*/
void		ft_display_stack(t_stack *stack);

/**
	@brief Free the stack
	@param stack pointer to stack top element 
*/
void		ft_free_stack(t_stack *stack);

/**
	@brief Checks if value exists inside of stack
	@param the value to search
	@param stack pointer to stack top element 
	@return false if the value is not found
*/
enum e_bool	ft_stack_contains(t_stack *stack, int value);

/**
	@brief Search duplicate node of equal value after node pointer
	@param stack pointer to stack top element
	@return false if no duplicate values are found
*/
enum e_bool	ft_search_duplicate(t_stack *stack);

#endif