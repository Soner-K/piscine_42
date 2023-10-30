/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sokaraku <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 11:59:22 by sokaraku          #+#    #+#             */
/*   Updated: 2023/06/29 15:54:18 by sokaraku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n >= 0)
		write(1, "P", 1);
	else if (n < 0)
		write(1, "N", 1);
}
/*
int main()
{
	ft_is_negative(5);
	write(1,"\n",1);
	ft_is_negative(0);
	write(1,"\n",1);
	ft_is_negative(-5);
}
*/
