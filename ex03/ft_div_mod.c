/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandriaf <mandriaf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 21:23:19 by mandriaf          #+#    #+#             */
/*   Updated: 2025/01/20 21:37:50 by mandriaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if(b > 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
int	main(void)
{
	int n1 = 100, n2 = 50;
	int div, mod;

	ft_div_mod(10, 5, &div, &mod);
	printf("%d div %d = %d",n1,n2,div);
	printf("\n%d mod %d = %d",n1,n2,mod);
}
