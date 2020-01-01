/*
** path.c for melev in /home/thormster/Dev/Melev/src
** 
** Made by thormster
** Login   <thormster@localhost>
** 
** Started on  Mon Dec 30 23:14:52 2019 thormster
** Last update Wed Jan  1 14:33:42 2020 thormster
*/

#include	"melev.h"

int		get_set_path(t_melev *melev)
{
  char		*path_str;
  int		i;

  i = 0;
  path_str = NULL;
  i = get_env_var_pos(melev->xenv, "PATH");
  path_str = get_env_var_value(melev->xenv[i]);
  if ((melev->xpath = my_str_to_wordtab(path_str, ':')) == NULL)
    return (ERR);
  return (0);
}
