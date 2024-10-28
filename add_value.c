/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_value.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpoulain <cpoulain@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 21:31:37 by cpoulain          #+#    #+#             */
/*   Updated: 2024/10/28 21:40:12 by cpoulain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	add(int *nbr_ptr, int value)
{
	*nbr_ptr += value;
}

int	main(void)
{
	int	nb;

	nb = 10;
	printf("%d\n", nb);
	add(&nb, 3);
	printf("%d\n", nb);
}
