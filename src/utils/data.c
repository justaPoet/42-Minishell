/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obouayed <obouayed@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 00:55:40 by obouayed          #+#    #+#             */
/*   Updated: 2025/01/04 17:48:56 by obouayed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/minishell.h"

// Initialize the data of minishell
void	initialize_data(t_data **data)
{
	*data = get_data();
	(*data)->tmp_env = NULL;
	(*data)->token = NULL;
	(*data)->envp = NULL;
	(*data)->cmd = NULL;
	(*data)->line = NULL;
	(*data)->exit_status = 0;
	(*data)->current_pid = 0;
}

// Store the data in a static variable (can be accessed from anywhere)
void	*get_data(void)
{
	static t_data	data;

	return (&data);
}
