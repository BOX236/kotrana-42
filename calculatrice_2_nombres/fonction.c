/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fonction.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manambina <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 22:10:54 by manambina         #+#    #+#             */
/*   Updated: 2025/02/26 22:31:18 by manambina        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "header.h"

int	sum(int *a, int *b)
{
	return (*a + *b);
}

int	sous(int *a, int *b)
{
	return (*a - *b);
}

int	div(int *a, int *b)
{
	return (*a / *b);
}

int	mod(int *a, int *b)
{
	return (*a % *b);
}
