/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manambina <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 19:29:03 by manambina         #+#    #+#             */
/*   Updated: 2025/03/02 20:15:13 by manambina        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*pd;
	const unsigned char	*psrc;

	pd = dest;
	psrc = src;
	while (n--) //equivaut tant que (n > 0) => n--;
		*pd++ = *psrc++;
	return (dest);
}
