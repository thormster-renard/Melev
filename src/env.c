/*
** env.c for Medev in /home/thormster/Dev/Melev/src
** 
** Made by thormster
** Login   <thormster@localhost>
** 
** Started on  Sun Dec 29 13:04:41 2019 thormster
** Last update Wed Jan  1 14:39:29 2020 thormster
*/

#include	"melev.h"

int		display_env(t_melev *melev)
{
  int		i;

  i = 0;
  while (melev->xenv[i] != NULL)
  {
    xputstr(melev->xenv[i]);
    xputchar('\n');
    i += 1;
  }
  return (0);
}

int		get_env_var_pos(char **xenv, char *var)
{
  int		i;
  int		j;

  i = 0;
  j = 0;
  while (xenv[i] != NULL)
  {
    if (xenv[i][0] == var[0])
    {
      while (xenv[i][j] == var[j] && var[j] != '\0')
	j += 1;
      if (j == xstrlen(var))
	return (i);
    }
    i += 1;
  }
  return (0);
}

char		*get_env_var_value(char *env_pos)
{
  char		*val;
  int		i;
  int		x;

  i = 0;
  x = 0;
  if (env_pos)
  {
    while (env_pos[i++] != '=' && env_pos[i] != '\0');
    if ((val = xmalloc(((xstrlen(env_pos) + 1) - i) * sizeof(char))) == NULL)
      return (NULL);
    while (env_pos[i] != '\0')
    {
      val[x] = env_pos[i];
      i += 1;
      x += 1;
    }
    val[x] = '\0';
    return (val);
  }
  return (NULL);
}

char		**my_env_cpy(char **env)
{
  char		**mtab;
  int		i;
  int		j;

  i = 0;
  while (env[i++] != NULL);
  i += 1;
  if ((mtab = xmalloc(i * sizeof(char*))) == NULL)
    return (NULL);
  i = 0;
  while (env[i] != NULL)
  {
    j = 0;
    mtab[i] = NULL;
    if ((mtab[i] = xmalloc((xstrlen(env[i]) + 1) * sizeof(char))) == NULL)
      return (NULL);
    while (env[i][j] != '\0')
    {
      mtab[i][j] = env[i][j];
      j += 1;
    }
    i += 1;
  }
  return (mtab); 
}
