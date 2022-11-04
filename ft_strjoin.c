/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mballa <mballa@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 20:19:30 by mballa            #+#    #+#             */
/*   Updated: 2022/10/30 08:16:08 by mballa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*strjoin;

	i = 0;
	j = 0;
	if (s1 == 0 || s2 == 0)
		return (0);
	strjoin = malloc(ft_strlen(s1) + ft_strlen(s2) + 1 * sizeof(char));
	if (!strjoin)
		return (0);
	while (s1[i])
	{
		strjoin[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		strjoin[i] = s2[j];
		j++;
		i++;
	}
	strjoin[i] = '\0';
	return (strjoin);
}
