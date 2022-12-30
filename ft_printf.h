/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakman <fakman@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 19:00:54 by fakman            #+#    #+#             */
/*   Updated: 2022/12/30 03:53:04 by fakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include "libft/libft.h"

int	ft_printf(const char *str, ...);
int	ft_format(va_list args, char format);
int	ft_unsigned(unsigned int a);
int	ft_hexadecimal(unsigned int a, char x);
int	ft_pointer(unsigned long long a);
int	ft_pointer_hex(unsigned long long a);

#endif
