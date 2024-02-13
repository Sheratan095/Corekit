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

//Circular dependency: con't use t_stack because it isn't stiil defined
//This will result in a compilation error because the compiler
//	doesn't know what t_stack is at that point.
typedef struct s_stack
{
	int				value;
	struct s_stack	*next;
	struct s_stack	*prev;
}	t_stack;

//Add new node to the stack and return the new node pointer, so the new top
t_stack	*ft_push(t_stack *stack, int new_value);

//Remove top element and return th second node pointer, so the new top
t_stack	*ft_pop(t_stack *stack);

//Print in the termial the stack, starting from top
void	ft_display_stack(t_stack *stack);

//Free the stack
void	ft_free_stack(t_stack *stack);

#endif