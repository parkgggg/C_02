/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gupark <gupark@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 10:32:21 by gupark            #+#    #+#             */
/*   Updated: 2021/10/19 10:32:23 by gupark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int index;

	index = 0;
	while(str[index])
	{
		if(str[index] < '0' || str[index] > '9')
			return (0);
		index++;
	}
	return (1);
}