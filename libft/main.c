/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manambina <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 13:01:37 by manambina         #+#    #+#             */
/*   Updated: 2025/03/04 21:07:28 by manambina        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	d[] = "Coucou, Coucou, 123123";
	ft_memmove(d+16, d, 6);
	printf("%s\n",d);
	return (0);
}
