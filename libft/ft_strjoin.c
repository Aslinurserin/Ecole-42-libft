/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aserin <aserin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 17:54:04 by aserin            #+#    #+#             */
/*   Updated: 2022/10/21 13:36:11 by aserin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		s1_len;
	int		s2_len;
	char	*arry;

	if (!s1 || !s2)
		return (NULL);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	arry = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!arry)
		return (NULL);
	ft_strlcpy((arry), (char *)s1, s1_len + s2_len + 1);
	ft_strlcpy((arry + s1_len), (char *)s2, s1_len + s2_len + 1);
	return (arry);
}
