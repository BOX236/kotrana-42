/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandriaf <mandriaf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 21:17:49 by mandriaf          #+#    #+#             */
/*   Updated: 2025/01/20 21:22:22 by mandriaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tp;

	tp = *a;
	*a = *b;
	*b = tp;
}

int	main(void)
{
	int	n1;
	int	n2;

	n1 = 52;
	n2 = 16;
	printf ("Avant echange a = %d et b = %d\n", n1, n2);
	ft_swap(&n1, &n2);
	printf("Apres echange a = %d et b = %d\n", n1, n2);
	return (0);
}
