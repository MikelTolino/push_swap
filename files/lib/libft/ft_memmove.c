/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 13:59:48 by mmateo-t          #+#    #+#             */
/*   Updated: 2021/11/08 16:43:42 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*ptr;
	unsigned char	*ptr2;

	ptr = (unsigned char *)src;
	ptr2 = (unsigned char *)dst;
	if (ptr2 > ptr)
	{
		while (len--)
			ptr2[len] = ptr[len];
	}
	else
		ft_memcpy(ptr2, ptr, len);
	return (dst);
}
