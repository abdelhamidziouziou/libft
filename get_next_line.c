/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abziouzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/17 00:40:03 by abziouzi          #+#    #+#             */
/*   Updated: 2022/06/09 16:56:56 by abziouzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_read_to_rest(int fd, char *rest)

{
	int		read_bytes;
	char	*buff;

	if (!rest)
		rest = ft_strdup_gnl("");
	buff = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buff)
		return (NULL);
	read_bytes = 1;
	while (ft_check_nl(rest) == -1 && read_bytes != 0)
	{
		read_bytes = read(fd, buff, BUFFER_SIZE);
		if (read_bytes == -1)
		{
			free(rest);
			return (free(buff), NULL);
		}
		buff[read_bytes] = '\0';
		rest = ft_strjoin_gnl(rest, buff);
	}
	return (free(buff), rest);
}

char	*ft_getline(char *rest)
{
	int		i;
	char	*str;

	i = 0;
	if (!rest[i])
		return (NULL);
	while (rest[i] && rest[i] != '\n')
		i++;
	str = (char *)malloc(sizeof(char) * (i + 2));
	if (!str)
		return (NULL);
	i = 0;
	while (rest[i] && rest[i] != '\n')
	{
		str[i] = rest[i];
		i++;
	}
	if (rest[i] == '\n')
	{
		str[i] = rest[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_new_rest(char *rest)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	while (rest[i] && rest[i] != '\n')
		i++;
	if (!rest[i])
		return (free(rest), NULL);
	str = (char *)malloc(sizeof(char) * (ft_strlen_gnl(rest) - i + 1));
	if (!str)
		return (NULL);
	i++;
	j = 0;
	while (rest[i])
		str[j++] = rest[i++];
	str[j] = '\0';
	free(rest);
	return (str);
}

char	*get_next_line(int fd)
{
	char		*line;
	static char	*rest[10240];

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (0);
	rest[fd] = ft_read_to_rest(fd, rest[fd]);
	if (!rest[fd])
		return (NULL);
	line = ft_getline(rest[fd]);
	rest[fd] = ft_new_rest(rest[fd]);
	return (line);
}
