/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abin-saa <abin-saa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 15:46:04 by abin-saa          #+#    #+#             */
/*   Updated: 2022/08/27 12:27:51 by abin-saa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_read(int fd, char *str)
{
	char	*buff;
	int		len;

	buff = malloc((BUFFER_SIZE + 2) * sizeof(char));
	if (!buff)
		return (NULL);
	len = 1;
	while (!ft_strchr_gnl(str, '\n') && (len != 0))
	{
		len = read(fd, buff, BUFFER_SIZE);
		if (len == -1)
		{
			free(buff);
			return (NULL);
		}
		buff[len] = '\0';
		str = ft_strjoin_mod(str, buff);
	}
	free(buff);
	return (str);
}

char	*ft_skip(char *old_buffer)
{
	int		i;
	int		j;
	char	*new_buffer;

	i = 0;
	while (old_buffer[i] != '\0' && old_buffer[i] != '\n')
		i++;
	if (old_buffer[i] == '\0')
	{
		free(old_buffer);
		return (NULL);
	}
	new_buffer = malloc(sizeof(char) * (ft_strlen(old_buffer) - i + 1));
	if (new_buffer == NULL)
		return (NULL);
	i++;
	j = 0;
	while (old_buffer[i] != '\0')
		new_buffer[j++] = old_buffer[i++];
	new_buffer[j] = '\0';
	free(old_buffer);
	return (new_buffer);
}

char	*ft_line(char *str)
{
	int		i;
	char	*line_new;

	i = 0;
	if (!str[i])
		return (NULL);
	while (str[i] && str[i] != '\n')
		i++;
	line_new = (char *)malloc(sizeof(char) * (i + 2));
	if (!line_new)
		return (NULL);
	i = 0;
	while (str[i] && str[i] != '\n')
	{
		line_new[i] = str[i];
		i++;
	}
	if (str[i] == '\n')
	{
		line_new[i] = str[i];
		i++;
	}
	line_new[i] = '\0';
	return (line_new);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*buffer;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	buffer = ft_read(fd, buffer);
	if (!buffer)
		return (NULL);
	line = ft_line(buffer);
	buffer = ft_skip(buffer);
	return (line);
}

// #include <fcntl.h>
// #include <stdio.h>

// int main()
// {
// 	int fd =open("empty", O_RDONLY);
// 	char *line = get_next_line(fd);
// 	// printf("%s", line);

// 	while (line != NULL)
// 	{
// 		printf("%s", line);
// 		free(line);
// 		line = get_next_line(fd);
// 	}
// }