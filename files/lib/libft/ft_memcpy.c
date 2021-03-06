/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 13:24:11 by mmateo-t          #+#    #+#             */
/*   Updated: 2021/11/08 16:43:04 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*ptr;
	unsigned char	*ptr2;

	ptr = (unsigned char *)src;
	ptr2 = (unsigned char *)dst;
	if (!n || dst == src)
		return (dst);
	while (n-- > 0)
	{
		*(ptr2++) = *(ptr++);
	}
	return (dst);
}
