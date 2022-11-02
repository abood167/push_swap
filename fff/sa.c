/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abin-saa <abin-saa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 11:54:24 by abin-saa          #+#    #+#             */
/*   Updated: 2022/09/23 19:18:13 by abin-saa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_list **stack_a)
{
	t_list	*first;
	t_list	*second;
	t_list	*third;

	if (*stack_a == NULL || ft_lstsize(*stack_a) == 1)
		return ;
	first = *stack_a;
	second = first->next;
	third = second->next;
	first->next = third;
	second->next = first;
	*stack_a = second;
	ft_putstr_fd("sa\n", 1);
}

void	pb(t_list **stack_a, t_list **stack_b)
{
	t_list	*temp;
	t_list	*first;

	temp = (*stack_a)->next;
	first = *stack_a;
	if (*stack_a == NULL)
		return ;
	ft_lstadd_front(stack_b, first);
	*stack_a = temp;
	ft_putstr_fd("pb\n", 1);
}

void	ra(t_list **stack_a)
{
	t_list	*first;
	t_list	*last;

	last = ft_lstlast(*stack_a);
	first = *stack_a;
	if (*stack_a == NULL || ft_lstsize(*stack_a) == 1)
		return ;
	last->next = first;
	*stack_a = first->next;
	first->next = NULL;
	ft_putstr_fd("ra\n", 1);
}

void	rra(t_list **stack_a)
{
	t_list	*first;
	t_list	*secend_last;
	t_list	*last;

	last = ft_lstlast(*stack_a);
	secend_last = *stack_a;
	first = *stack_a;
	if (*stack_a == NULL || ft_lstsize(*stack_a) == 1)
		return ;
	while (secend_last->next->next != NULL)
		secend_last = secend_last->next;
	secend_last->next = NULL;
	last->next = first;
	*stack_a = last;
	ft_putstr_fd("rra\n", 1);
}
