/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pars.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abin-saa <abin-saa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 19:12:00 by abin-saa          #+#    #+#             */
/*   Updated: 2022/09/25 14:59:07 by abin-saa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*join_everthing(char **av)
{
	char	*s;
	int		i;

	s = NULL;
	i = 1;
	while (av[i])
	{
		s = ft_strjoin_mod(s, av[i]);
		s = ft_strjoin_mod(s, " ");
		i++;
	}
		i = 0;
	while (s[i] != '\0')
	{
		if (fttt_isdigit(s[i]) == 0)
			error_exit(s);
		i++;
	}
	return (s);
}

void	check_double_sign(char *arg_str)
{
	int	i;

	i = -1;
	while (arg_str[++i] != '\0')
		if (arg_str[i] == '+' || arg_str[i] == '-')
			if (arg_str[i] == '+' || arg_str[i] == '-')
				if (arg_str[i + 1] == '+' || arg_str[i + 1] == '-')
					error_exit(arg_str);
}

void	pars_help(t_list **stack_a, char *arg_str, char **x)
{
	int		i;
	int		c;
	t_list	*elem;

	i = 0;
	while (x[i])
	{
		c = -1;
		if ((x[i][0] == '-' || x[i][0] == '+') && x[i][1] == '\0')
			exit_any(stack_a, arg_str, x);
		while (x[i][++c] != '\0')
			if ((x[i][c] == '-' || x[i][c] == '+') && c != 0)
				exit_any(stack_a, arg_str, x);
		elem = ft_lstnew(ft_atoi((x[i]), stack_a, arg_str, x));
		if (elem == NULL)
			exit_any(stack_a, arg_str, x);
		ft_lstadd_back(stack_a, elem);
		i++;
	}
}

int	pars(t_list **stack_a, char **av)
{
	char	*arg_str;
	char	**x;

	arg_str = join_everthing(av);
	check_double_sign(arg_str);
	x = ft_split(arg_str, ' ');
	if (*x == NULL)
	{
		free(x);
		error_exit (arg_str);
	}
	pars_help(stack_a, arg_str, x);
	free_2d(x);
	free(arg_str);
	cheak_doubls(stack_a);
	return (1);
}
