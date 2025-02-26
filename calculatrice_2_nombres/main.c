/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manambina <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 21:57:59 by manambina         #+#    #+#             */
/*   Updated: 2025/02/26 23:04:19 by manambina        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "header.h"

int	main(void)
{
	int	a;
	int	b;
	int	choice;

	printf("Entrez deux nombres :\n");
	scanf("%d%d", &a, &b);
	printf ("1-Addition\n2-Soustraction\n3-Division\n4-Modulo\n");
	printf("> ");
	scanf("%d", &choice);
	while (choice < 1 || choice > 4)
	{
		printf("Mauvais choix : \n");
		scanf("%d", &choice);
	}
	if (choice == 1)
		printf("%d\n", sum(&a, &b));
	else if (choice == 2)
		printf("%d\n", sous(&a, &b));
	else if (choice == 3)
	{
		if (b == 0)
		{
			printf("Division impossible.\n");
			return (0);
		}
		printf("%d\n", div(&a, &b));
	}
	else if (choice == 4)
	{
		if (b == 0)
		{
			printf("Syntax error.\n");
			return (0);
		}
		printf("%d\n", mod(&a, &b));
	}
	return (0);
}
