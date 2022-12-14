/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_cub3d.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessakhi <aessakhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 17:12:20 by aessakhi          #+#    #+#             */
/*   Updated: 2022/10/04 20:07:49 by aessakhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/cub3d.h"

char	*ft_strjoin_cub3d(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*dest;

	i = -1;
	j = -1;
	if (!s1)
	{
		s1 = malloc(sizeof(char) * 1);
		s1[0] = '\0';
	}
	dest = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 2));
	while (s1[++i])
		dest[i] = s1[i];
	while (s2[++j])
		dest[i + j] = s2[j];
	dest[i + j] = '\n';
	dest[i + j + 1] = '\0';
	free(s1);
	return (dest);
}
