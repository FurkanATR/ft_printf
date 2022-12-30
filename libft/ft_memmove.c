/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakman <fakman@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 01:52:38 by fakman            #+#    #+#             */
/*   Updated: 2022/12/23 15:45:28 by fakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	if (!dest && !src)
		return (NULL);
	if (dest < src)
		ft_memcpy(dest, src, len);
	else if (dest > src)
	{
		while (len--)
			((unsigned char *)dest)[len] = ((unsigned char *)src)[len];
	}
	return (dest);
}
