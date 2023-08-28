/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andos-sa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 12:20:34 by andos-sa          #+#    #+#             */
/*   Updated: 2023/08/17 13:08:09 by andos-sa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	l;

	l = 0;
	while (str[l] != '\0')
	{
		l++;
	}
	return (l);
}

char	*ft_strdup(char *src)
{
	char	*ptr;
	int		i;

	ptr = malloc((ft_strlen(src) + 1) * sizeof(char));
	i = 0;
	if (ptr == NULL)
	{
		return (0);
	}
	while (src[i] != '\0')
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/*
int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("%s", ft_strdup(argv[1]));
		return (0);
	}
	else
	{
		return (0);
	}
}*/
