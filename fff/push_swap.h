/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abin-saa <abin-saa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 09:17:48 by abin-saa          #+#    #+#             */
/*   Updated: 2022/09/24 15:59:16 by abin-saa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <stdio.h>

void	sa(t_list **stack_a);
void	pb(t_list **stack_a, t_list **stack_b);
void	ra(t_list **stack_a);
void	rra(t_list **stack_a);
void	sort2num(t_list **stack_a);
void	sort3num(t_list **stack_a);
void	sb(t_list **stack_b);
void	rb(t_list **stack_b);
void	rrb(t_list **stack_b);
void	pa(t_list **stack_b, t_list **stack_a);
void	sort5num(t_list **stack_a, t_list **stack_b);
void	sort4num(t_list **stack_a, t_list **stack_b);
void	sort2numb(t_list **stack_b);
int		findmin(t_list **stack_a);
void	sort100(t_list **stack_a, t_list **stack_b);
int		find_length_min(t_list **stack_a);
void	fill_index(t_list **stack_a);
int		findmin_index(t_list **stack_a);
int		find_length_min_index(t_list **stack_a);
void	sort_above100(t_list **stack_a, t_list **stack_b);
int		findmax(t_list **stack_a);
void	send_to_b(t_list **stack_a, int index, t_list **stack_b);
int		find_length__index(t_list **stack_a, int index);
void	printlist(t_list *lst);
void	sort_ab100(t_list *stack_a, t_list *stack_b);
int		findmax_index(t_list **stack_b);
void	sort15(t_list **stack_a, t_list **stack_b);
void	sort100ne(t_list **stack_a, t_list **stack_b);
void	cheak_doubls(t_list **stack_a);

int		get_dist_from_top(t_list **stack_a, t_list **stack_b);
int		get_dist_from_bot(t_list **stack_a, t_list **stack_b);
int		sorted(t_list **stack_a);
void	sort(t_list **stack_a, t_list **stack_b);
int		pars(t_list **stack_a, char **av);
int		get_num_cmber(t_list **stack_a);

// typedef struct s_list
// {
// 	int			content;
// 	struct s_list	*next;
// }	list_b;

#endif
