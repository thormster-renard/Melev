/*
** pwd.c for Medev in /home/thormster/Dev/Melev/src
** 
** Made by thormster
** Login   <thormster@localhost>
** 
** Started on  Sun Dec 29 13:29:03 2019 thormster
** Last update Mon Dec 30 23:19:56 2019 thormster
*/

#include	"melev.h"

int		pwd(t_melev *melev)
{
  char		*val;
  int		i;

  i = 0;
  if ((i = get_env_var_pos(melev->xenv, "PWD")) == ERR)
    return (ERR);
  if ((val = get_env_var_value(melev->xenv[i])) == NULL)
    return (ERR);
  xputstr(val);
  xputchar('\n');
  xfree(val);/*TEMPORAIRE. Apres il faudra garder cette variable*/
  return (0);
}
