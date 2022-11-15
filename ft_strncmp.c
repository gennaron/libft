/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngennaro <ngennaro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:42:36 by ngennaro          #+#    #+#             */
/*   Updated: 2022/11/15 17:21:09 by ngennaro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if ((s1[i] > s2[i]) || (s2[i] == '\0' && s1[i] != '\0'))
			return (1);
		if ((s1[i] < s2[i]) || (s1[i] == '\0' && s2[i] != '\0'))
			return (-1);
		else
			i++;
	}
	return (0);
}
