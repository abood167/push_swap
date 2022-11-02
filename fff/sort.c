/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abin-saa <abin-saa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 17:17:39 by abin-saa          #+#    #+#             */
/*   Updated: 2022/09/25 09:48:52 by abin-saa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort2num(t_list **stack_a)
{
	t_list	*node;
	int		len1;
	int		len2;

	node = *stack_a;
		len1 = node->content;
		len2 = node->next->content;
	if (len1 > len2)
		sa(stack_a);
}

void	sort2numb(t_list **stack_b)
{
	t_list	*node;
	int		len1;
	int		len2;

	node = *stack_b;
	len1 = node->content;
	len2 = node->next->content;
	if (len1 > len2)
		sa(stack_b);
}

void	sort3num(t_list **stack_a)
{
	t_list	*node;
	int		len1;
	int		len2;
	int		len3;

	node = *stack_a;
	len1 = node->content;
	len2 = node->next->content;
	len3 = node->next->next->content;
	if ((len1 > len2) && (len1 < len3) && (len2 < len3))
		sa(stack_a);
	else if ((len1 > len2) && (len2 > len3))
	{	
		sa(stack_a);
		rra(stack_a);
	}
	else if ((len1 > len2) && (len2 < len3) && (len1 > len3))
		ra(stack_a);
	else if ((len1 < len2) && (len2 > len3) && (len1 < len3))
	{
		sa(stack_a);
		ra(stack_a);
	}
	else if ((len1 < len2) && (len2 > len3) && (len1 > len3))
		rra(stack_a);
}

int	findmin(t_list **stack_a)
{
	int		min;
	t_list	*node;

	node = *stack_a;
	min = 2147483647;
	while (node != NULL)
	{
		if (min > node->content)
			min = node->content;
		node = node->next;
	}
	return (min);
}

int	findmin_index(t_list **stack_a)
{
	int		min;
	t_list	*node;

	node = *stack_a;
	min = 2147483647;
	while (node != NULL)
	{
		if (min > node->index)
			min = node->index;
		node = node->next;
	}
	return (min);
}
