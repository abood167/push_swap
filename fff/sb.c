/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abin-saa <abin-saa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 14:20:15 by abin-saa          #+#    #+#             */
/*   Updated: 2022/09/23 19:53:03 by abin-saa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sb(t_list **stack_b)
{
	t_list	*first;
	t_list	*second;
	t_list	*third;

	first = *stack_b;
	second = first->next;
	third = second->next;
	if (*stack_b == NULL || ft_lstsize(*stack_b) == 1)
		return ;
	first->next = third;
	second->next = first;
	*stack_b = second;
	ft_putstr_fd("sb\n", 1);
}

void	rb(t_list **stack_b)
{
	t_list	*first;
	t_list	*last;

	first = *stack_b;
	last = ft_lstlast(*stack_b);
	*stack_b = first->next;
	last->next = first;
	first->next = NULL;
	if (*stack_b == NULL || ft_lstsize(*stack_b) == 1)
		return ;
	ft_putstr_fd("rb\n", 1);
}

void	rrb(t_list **stack_b)
{
	t_list	*first;
	t_list	*secend_last;
	t_list	*last;

	last = ft_lstlast(*stack_b);
	secend_last = *stack_b;
	first = *stack_b;
	if (*stack_b == NULL || ft_lstsize(*stack_b) == 1)
		return ;
	while (secend_last->next->next != NULL)
		secend_last = secend_last->next;
	secend_last->next = NULL;
	last->next = first;
	*stack_b = last;
	ft_putstr_fd("rrb\n", 1);
}

void	pa(t_list **stack_b, t_list **stack_a)
{
	t_list	*temp;
	t_list	*first;

	first = *stack_b;
	temp = NULL;
	if (*stack_b)
		temp = (*stack_b)->next;
	if (*stack_b == NULL)
		return ;
	ft_lstadd_front(stack_a, first);
	*stack_b = temp;
	ft_putstr_fd("pa\n", 1);
}
