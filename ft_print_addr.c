/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_addr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micabrer <micabrer@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 13:43:32 by micabrer          #+#    #+#             */
/*   Updated: 2023/12/20 14:11:10 by micabrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_addr(size_t pointer, int *length)
{
	int		i;
	char	hex_digits[25];
	char	*base_character;

	i = 0;
	base_character = "0123456789abcdef";
	write (1, "0x", 2);
	(*length) += 2;
	if (pointer == 0)
	{
		ft_putchar_len('0', length);
	}
	while (pointer != 0)
	{
		hex_digits[i] = base_character[pointer % 16];
		pointer = pointer / 16;
		i++;
	}
	while (i--)
	{
		ft_putchar_len(hex_digits[i], length);
	}
}
