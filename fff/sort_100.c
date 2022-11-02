/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_100.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abin-saa <abin-saa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 20:10:52 by abin-saa          #+#    #+#             */
/*   Updated: 2022/10/02 11:53:25 by abin-saa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_back(t_list **stack_a, t_list **stack_b)
{
	t_list	*b;
	int		max;

	b = *(stack_b);
	while (ft_lstsize(*stack_b) > 0)
	{
		max = findmax_index(stack_b);
		if ((b)->index == max)
			pa(stack_b, stack_a);
		else
		{
			if (find_length__index(stack_b, max) >= (ft_lstsize(*stack_b) / 2))
				rrb(stack_b);
			else
				rb(stack_b);
		}
		b = *(stack_b);
	}
}

void	sort100ne(t_list **stack_a, t_list **stack_b)
{
	int		cmper;
	int		i;
	t_list	*a;

	i = 0;
	cmper = get_num_cmber(stack_a);
	a = *(stack_a);
	while (ft_lstsize(*stack_a) > 0 && a != NULL)
	{
		if (a->index >= cmper * i && a->index <= (cmper * (i + 1)))
		{
			pb(stack_a, stack_b);
		}
		else
			ra(stack_a);
		if (ft_lstsize(*stack_b) == cmper * (i + 1))
			i++;
		a = *stack_a;
	}
	push_back(stack_a, stack_b);
}

int	get_num_cmber(t_list **stack_a)
{
	int	cmper;

	if (ft_lstsize(*stack_a) <= 150)
		cmper = 15;
	else
		cmper = 35;
	return (cmper);
}

int	cheak_its_swap( t_list **stack_b)
{
	int	first;
	int	secnd;

	first = (*stack_b)->index;
	if (!(*stack_b)->next)
		return (0);
	secnd = (*stack_b)->next->index;
	if (secnd > first)
	{
		sb(stack_b);
	}
	return (1);
}
