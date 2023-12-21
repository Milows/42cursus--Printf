/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: micabrer <micabrer@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 23:45:53 by micabrer          #+#    #+#             */
/*   Updated: 2023/12/20 17:11:36 by micabrer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stddef.h>
# include <stdlib.h>

void	ft_putchar_len(char character, int *length);
void	ft_putstr_len(char *args, int *length);
void	ft_print_int(int number, int *length);
void	ft_print_addr(size_t pointer, int *length);
void	ft_print_uint(unsigned int unumber, int *length);
void	ft_print_hex(unsigned int decimal, int *length, char hex_case);
int		ft_printf(const char *str, ...);

#endif