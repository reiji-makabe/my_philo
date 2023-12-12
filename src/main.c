/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakabe <rmkabe012@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 02:06:59 by rmakabe           #+#    #+#             */
/*   Updated: 2023/12/13 04:01:37 by rmakabe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

static int	usage(void);

int	main(int argc, char *argv[])
{
	t_data	data;

	if (argc != 5 && argc != 6)
		return (usage());
	if (is_invalid_input(argc, argv))
		return (1);
	if (init_data(&data, argc, argv))
		return (1);
	if (init_philo())
		return (1);
	return (0);
}

static int	usage(void);
{
	printf("Usage:./philo [1] [2] [3] [4] [+5]\n");
	printf("[1]:Number of philosophers\n");
	printf("[2]:Time to die\n");
	printf("[3]:Time to eat\n");
	printf("[4]:Time to sleep\n");
	printf("[5]:Number of times each philo must eat\n");
	return (0);
}
