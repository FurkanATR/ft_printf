/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakman <fakman@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 21:27:07 by fakman            #+#    #+#             */
/*   Updated: 2022/12/30 03:46:37 by fakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsigned(unsigned int a)
{
	int	total;

	total = 0;
	if (a < 10)
		total += ft_putchar_fd(a + 48);
	else
	{
		total += ft_unsigned(a / 10);
		total += ft_unsigned(a % 10);
	}
	return (total);
}

int	ft_hexadecimal(unsigned int a, char x)
{
	int	total;

	total = 0;
	if (a < 16)
	{
		if (x == 'X')
		{
			write(1, &"0123456789ABCDEF"[a], 1);
			total ++;
		}
		else
		{
			write(1, &"0123456789abcdef"[a], 1);
			total++;
		}
	}
	else
	{
		total += ft_hexadecimal(a / 16, x);
		total += ft_hexadecimal(a % 16, x);
	}
	return (total);
}

int	ft_pointer_hex(unsigned long long a)
{
	int	total;

	total = 0;
	if (a < 16)
	{
		write(1, &"0123456789abcdef"[a], 1);
		total++;
	}
	else
	{
		total += ft_pointer_hex(a / 16);
		total += ft_pointer_hex(a % 16);
	}
	return (total);
}

int	ft_pointer(unsigned long long a)
{
	int	total;

	total = 2;
	write (1, "0x", 2);
	total += ft_pointer_hex(a);
	return (total);
}
