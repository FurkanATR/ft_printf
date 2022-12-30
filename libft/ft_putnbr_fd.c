/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakman <fakman@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 15:17:59 by fakman            #+#    #+#             */
/*   Updated: 2022/12/30 02:12:03 by fakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_fd(int n)
{
	int	total;

	total = 0;
	if (n == -2147483648)
		total += ft_putstr_fd("-2147483648");
	else if (n == 2147483647)
		total += ft_putstr_fd("2147483647");
	else if (n < 0)
	{
		write(1, "-", 1);
		total++;
		total += ft_putnbr_fd(n * -1);
	}
	else if (n < 10)
	{
		ft_putchar_fd(n + 48);
		total++;
	}
	else
	{
		total += ft_putnbr_fd(n / 10);
		total += ft_putnbr_fd(n % 10);
	}
	return (total);
}
