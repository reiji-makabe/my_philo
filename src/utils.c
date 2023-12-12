/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakabe <rmkabe012@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 02:17:39 by rmakabe           #+#    #+#             */
/*   Updated: 2023/12/13 04:02:10 by rmakabe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

static int	is_in_string(char c, char *str)
{
	while (*str)
	{
		if (c == *str)
			return (1);
		str++;
	}
	return (0);
}

static int	philo_atoi(char *str)
{
	int		np;
	long	re;

	while (is_in_string(*str, "\t\n\v\f\r"))
		str++;
	np = 1;
	if (*str == '-')
		np *= -1;
	if (*str == '-' || *str == '+')
		str++;
	re = 0;
	while ('0' <= *str && *str <= '9')
	{
		re *= 10;
		re += *str - '0';
		str++;
	}
	return ((int)(re * np));
}

int	is_invalid_input(int argc, char **argv[])
{
	if (philo_atoi(argv[1]) > 200 || philo_atoi(argv[1]) < 0)
		return (printf("Invalid philosophers number\n"));
	else if (philo_atoi(argv[2] < 0))
		return (printf("Invalid time to die\n"));
	else if (philo_atoi(argv[3] < 0))
		return (printf("Invalid time to eat\n"));
	else if (philo_atoi(argv[4] < 0))
		return (printf("Invalid time to sleep\n"));
	if (argc == 6)
	{
		if (philo_atoi(argv[5] < 0))
				printf("Invalid must eat time\n");
	}
	return (0);
}
