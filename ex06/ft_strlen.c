/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mandriaf <mandriaf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/20 22:25:48 by mandriaf          #+#    #+#             */
/*   Updated: 2025/01/20 22:30:00 by mandriaf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_strlen(char *str)
{
	int count = 0;
	while(*str)
	{
		write(1, str, 1);
		count++;
		str++;
	}
	count = count + '0';
	write (1, &count, 1);
}
int main(void)
{
	char x[] = "abcdef";
	ft_strlen(x);
	return 0;
}
