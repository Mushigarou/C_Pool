/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfouadi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 15:13:16 by mfouadi           #+#    #+#             */
/*   Updated: 2021/07/01 11:33:34 by mfouadi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_alphabet(char c)
{
	c = 'a';
	while (c <= 'z')
	{
		write(1, &c, 1);
		c++;
	}
}