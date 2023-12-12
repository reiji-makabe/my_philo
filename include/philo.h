/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmakabe <rmkabe012@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 02:14:09 by rmakabe           #+#    #+#             */
/*   Updated: 2023/12/13 03:59:03 by rmakabe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

#include <stdio.h>

typedef struct	s_philo
{
	int	philo_num;
	int	time_to_die;
	int	time_to_eat;
	int	time_to_sleep;
	int	must_eat_time;
	int	dead;
	int	finished;
}	t_philo;

typedef struct	s_data
{
	t_philo	*philo:
}	t_data;

int	is_ivalid_input(int argc, char **argv);
int	init_data(t_data *data, int argc, char **argv);

#endif
