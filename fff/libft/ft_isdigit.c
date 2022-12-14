/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abin-saa <abin-saa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 13:18:08 by abin-saa          #+#    #+#             */
/*   Updated: 2022/09/25 10:57:09 by abin-saa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	fttt_isdigit(int c)
{
	if ((c >= 48 && c <= 57) || c == '+' || c == '-' || c == 32 || c == 9)
	{
		return (1);
	}
	else
		return (0);
}
/*int main()
{
    printf("%d",ft_isdigit('6'));
    return (0);
}*/