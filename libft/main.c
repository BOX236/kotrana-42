/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manambina <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 13:01:37 by manambina         #+#    #+#             */
/*   Updated: 2025/03/02 20:11:31 by manambina        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "libft.h"

int	main(void)
{
	char	d[] = "abcdllll";
	char	s[] = "llll";
	int	i = 0;
	size_t	l_s = 0;
	l_s = ft_strlcpy(d, s, 8);
	while (d[i])
	{
		write (1, &d[i++], 1);
	}
	printf("\n%ld\n", l_s);
	return (0);
}
