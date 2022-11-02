/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abin-saa <abin-saa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 09:58:42 by abin-saa          #+#    #+#             */
/*   Updated: 2022/09/25 19:10:56 by abin-saa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort5num(t_list **stack_a, t_list **stack_b)
{
	int		min;

	min = findmin(stack_a);
	while ((*stack_a)->content != min)
	{
		if (find_length_min(stack_a) > ft_lstsize(*stack_a) / 2)
			rra(stack_a);
		else
			ra(stack_a);
	}
	pb(stack_a, stack_b);
	min = findmin(stack_a);
	while ((*stack_a)->content != min)
	{
		if (find_length_min(stack_a) > (ft_lstsize(*stack_a) / 2))
			rra(stack_a);
		else
			ra(stack_a);
	}
	pb(stack_a, stack_b);
	sort3num(stack_a);
	pa(stack_b, stack_a);
	pa(stack_b, stack_a);
}

void	sort4num(t_list **stack_a, t_list **stack_b)
{
	int		min;

	min = findmin(stack_a);
	while ((*stack_a)->content != min)
	{
		ra(stack_a);
	}
	pb(stack_a, stack_b);
	sort3num(stack_a);
	pa(stack_b, stack_a);
}

int	findmax(t_list **stack_a)
{
	int		max;
	t_list	*node;

	node = *stack_a;
	max = -2147483647;
	while (node != NULL)
	{
		if (max < node->content)
			max = node->content;
		node = node->next;
	}
	return (max);
}

int	findmax_index(t_list **stack_a)
{
	int		max;
	t_list	*node;

	node = *stack_a;
	max = -2147483647;
	while (node != NULL)
	{
		if (max < node->index)
			max = node->index;
		node = node->next;
	}
	return (max);
}
