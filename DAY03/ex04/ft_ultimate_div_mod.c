/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maparmar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 16:24:46 by maparmar          #+#    #+#             */
/*   Updated: 2019/01/11 23:12:47 by maparmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int temp;

	if (*b != 0)
	{
		temp = (*a);
		*a = (*a) / (*b);
		*b = temp % (*b);
	}
}
