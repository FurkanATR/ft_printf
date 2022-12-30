/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakman <fakman@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 18:53:27 by fakman            #+#    #+#             */
/*   Updated: 2022/12/30 03:51:25 by fakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(va_list args, char format)
{
	int	total;

	total = 0;
	if (format == 'c')
		total += ft_putchar_fd(va_arg(args, int));
	else if (format == 's')
		total += ft_putstr_fd(va_arg(args, char *));
	else if (format == 'p')
		total += ft_pointer(va_arg(args, unsigned long long));
	else if (format == 'i' || format == 'd')
		total += ft_putnbr_fd(va_arg(args, int));
	else if (format == 'u')
		total += ft_unsigned(va_arg(args, unsigned int));
	else if (format == 'x')
		total += ft_hexadecimal(va_arg(args, unsigned long long), 'x');
	else if (format == 'X')
		total += ft_hexadecimal(va_arg(args, unsigned long long), 'X');
	else if (format == '%')
	{
		write(1, "%", 1);
		total++;
	}
	return (total);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		res;

	res = 0;
	i = 0;
	va_start(args, str);
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			res += ft_format(args, str[i + 1]);
			i += 1;
		}
		else
			res += ft_putchar_fd(str[i]);
		i++;
		va_end(args);
	}
	return (res);
}
