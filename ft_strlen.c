/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 21:41:46 by cpoulain          #+#    #+#             */
/*   Updated: 2024/10/28 21:50:40 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

size_t	ft_strlen(char	*str)
{
	char	*org;

	while (*str)
		str++;
	return (str - org);
}

/* "Bonsoir"

0x0000 = 'B'
0x0008 = 'o'
0x000F = 'n'
...
0x00XX = '\0'
0x00XX - 0x0000 = 0x00XX+
*/
