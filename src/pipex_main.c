/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex_main.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzeggaf <mzeggaf@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 17:09:37 by mzeggaf           #+#    #+#             */
/*   Updated: 2024/01/22 10:35:27 by mzeggaf          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int	main(int argc, char *argv[], char *env[])
{
	char	**paths_env;
	int		exit_status;

	if (argc != 5)
	{
		ft_putstr_fd("usage: ./pipex infile cmd1 cmd2 outfile\n", 2);
		return (0);
	}
	paths_env = ft_get_paths(env);
	if (!paths_env)
		return (1);
	exit_status = ft_pipex(argv + 1, paths_env);
	while (wait(NULL) > 0)
		;
	ft_free(paths_env);
	return (0);
}
