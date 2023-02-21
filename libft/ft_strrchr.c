/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aserin <aserin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 17:54:32 by aserin            #+#    #+#             */
/*   Updated: 2022/10/21 12:46:24 by aserin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	size_s;

	size_s = ft_strlen(s);
	while (size_s >= 0)
	{
		if (((char *)s)[size_s] == (char)c)
			return ((char *)(s + size_s));
		size_s--;
	}
	return (NULL);
}
