/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fakman <fakman@student.42kocaeli.com.tr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 11:38:02 by fakman            #+#    #+#             */
/*   Updated: 2022/12/23 15:46:14 by fakman           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*res;
	size_t	s_len;

	s_len = ft_strlen(s1);
	res = malloc(sizeof(char) * s_len + 1);
	if (!res)
		return (NULL);
	ft_memcpy(res, s1, s_len + 1);
	return (res);
}
