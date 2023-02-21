/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aserin <aserin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 17:53:25 by aserin            #+#    #+#             */
/*   Updated: 2022/10/21 12:35:13 by aserin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t cnt)
{
	char		*ps2dest;
	const char	*ps2source;

	ps2dest = (char *)dst;
	ps2source = (const char *)src;
	if ((ps2dest != NULL) && (ps2source != NULL))
	{
		while (cnt)
		{
			*(ps2dest++) = *(ps2source++);
			--cnt;
		}
	}
	return (dst);
}
