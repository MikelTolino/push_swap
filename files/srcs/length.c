/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   length.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 12:30:25 by mmateo-t          #+#    #+#             */
/*   Updated: 2021/11/08 22:31:16 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	length(int *a)
{
	int	i;

	i = 0;
	if (!a)
		return (-1);
	while (a[i] != '\0')
		i++;
	return (i);
}
