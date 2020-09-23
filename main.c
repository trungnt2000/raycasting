/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thi-nguy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/18 11:46:26 by thi-nguy          #+#    #+#             */
/*   Updated: 2020/09/23 10:03:02 by thi-nguy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

int main(int ac, char **av)
{
	int	save;
	t_mlx mlx;
	
	save = 0;
	mlx.ptr = 0;
	if (ac < 4) 
	{
		if (check_format(av[1], ".cub"))
		{
			if (ac == 3 && check_arg(av[2], "--save"))
			{
				save = 1;
				run_program(save, av/*, t_mlx *mlx*/);
			}
			else if (ac == 2)
				run_program(save, av/*, t_mlx *mlx*/);
		}
		else
			write(2, "Error : Invalid arguments\n", 26);
	}
	else
		write(2, "Error : Invalid arguments\n", 26);
	
	return (0);
}
