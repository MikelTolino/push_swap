/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 19:22:50 by mmateo-t          #+#    #+#             */
/*   Updated: 2021/11/08 16:40:53 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		i;
	int		size;

	size = ft_strlen(s1);
	i = 0;
	s2 = (char *)malloc(sizeof(char) * size + 1);
	if (s2 == NULL)
	{
		return (s2);
	}
	while (i <= size)
	{
		s2[i] = s1[i];
		i++;
	}
	return (s2);
}
