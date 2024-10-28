/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   visualisation_memory_string.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 23:11:58 by cpoulain          #+#    #+#             */
/*   Updated: 2024/10/28 23:15:13 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	char *str_test = "Salut comment ca va";
	while (*str_test)
	{
		printf("Addresse de str_test : %p | Valeur a l'addresse %p : %c\n", str_test, str_test, *str_test);
		str_test++;
	}
	return (0);
}
