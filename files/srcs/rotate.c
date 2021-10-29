/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 12:18:06 by mmateo-t          #+#    #+#             */
/*   Updated: 2021/10/29 12:47:21 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

//TODO: 1º Save a[0]
/*
	2º Rotate A
	3º Set a[len - 1] = a[0]
*/

int ra(s_stack *a)
{
	int i;
	int n;

	if (!a->stack[0])
		return (0);
	i = 0;
	n = a->stack[0];
	while (i < a->len - 1)
	{
		a->stack[i] = a->stack[i + 1];
		i++;
	}
	a->stack[i] = n;
	print("ra\n");
	return (1);
}

int rb(s_stack *b)
{
	int i;
	int n;

	if (!b->stack[0])
		return (0);
	i = 0;
	n = b->stack[0];
	while (i < b->len - 1)
	{
		b->stack[i] = b->stack[i + 1];
		i++;
	}
	b->stack[i] = n;
	print("rb\n");
	return (1);
}

int rr(s_stack *a, s_stack *b)
{
	if (!ra(a) && !rb(b))
		return (0);
	return(1);

}