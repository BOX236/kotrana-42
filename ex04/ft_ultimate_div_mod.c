/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandriaf <mandriaf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 21:38:45 by mandriaf          #+#    #+#             */
/*   Updated: 2025/01/20 21:44:05 by mandriaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int tmpa;
	tmpa = *a;
	*a = tmpa / *b;
	*b = tmpa % *b;
}
int	main(void)
{
	int x = 150;
	int y = 3;
	ft_ultimate_div_mod(&x, &y);
	printf("%d\n",x);
	printf("%d",y);
	return 0;
}
