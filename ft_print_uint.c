/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_uint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micabrer <micabrer@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 15:00:05 by micabrer          #+#    #+#             */
/*   Updated: 2023/12/20 16:55:43 by micabrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_uint(unsigned int unumber, int *length)
{
	if (unumber >= 10)
		ft_print_uint(unumber / 10, length);
	ft_putchar_len(unumber % 10 + '0', length);
}
