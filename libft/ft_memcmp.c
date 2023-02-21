/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aserin <aserin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 17:53:21 by aserin            #+#    #+#             */
/*   Updated: 2022/10/21 12:35:04 by aserin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	int		fark;

	if (n == 0)
		return (0);
	i = 0;
	while (i < n)
	{
		fark = ((unsigned char *)s1)[i] - ((unsigned char *)s2)[i];
		if (fark != 0)
			return (fark);
		i++;
	}
	return (0);
}
