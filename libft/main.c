/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manambina <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 13:01:37 by manambina         #+#    #+#             */
/*   Updated: 2025/03/02 11:04:03 by manambina        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

int	main(void)
{
	//char	c[] = "abcdefh";
	//int	i = 0;
	char	x = 'a';

	ft_isascii(x);
	write (1, &x, 1);
	return (0);
}
