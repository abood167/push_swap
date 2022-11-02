/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abin-saa <abin-saa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 03:30:21 by abin-saa          #+#    #+#             */
/*   Updated: 2022/09/25 10:51:25 by abin-saa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_length_min(t_list **stack_b)
{
	int		i;
	t_list	*node;

	node = *stack_b;
	i = 0;
	while (node != NULL)
	{
		if (findmin(stack_b) == node->content)
			break ;
		i++;
		node = node->next;
	}
	return (i);
}

int	find_length__index(t_list **stack_a, int index)
{
	int		i;
	t_list	*node;

	i = 0;
	node = *stack_a;
	while (node != NULL)
	{
		if (node->index == index)
			break ;
		i++;
		node = node->next;
	}
	return (i);
}

void	fill_index(t_list **stack_a)
{
	t_list	*node;
	t_list	*temp_node;
	int		i;

	i = 1;
	temp_node = *stack_a;
	node = *stack_a;
	while (temp_node != NULL)
	{
		node = *stack_a;
		while (node != NULL)
		{
			if (temp_node->content > node->content)
				i++;
			node = node->next;
		}
		temp_node->index = i;
		i = 1;
		temp_node = temp_node->next;
	}
}

void	cheak_doubls(t_list **stack_a)
{
	t_list	*node;
	t_list	*temp_node;

	node = *stack_a;
	temp_node = *stack_a;
	while (temp_node != NULL)
	{
		node = temp_node->next;
		while (node != NULL)
		{
			if (temp_node->content == node->content)
			{
				ft_lstclear(stack_a, free);
				write(2, "Error\n", 6);
				exit(0);
			}
			node = node->next;
		}
		temp_node = temp_node->next;
	}
}

int	sorted(t_list **stack_a)
{
	t_list	*a;

	a = *stack_a;
	while (a->next)
	{
		if (a->content > a->next->content)
			return (0);
		a = a->next;
	}
	return (1);
}
