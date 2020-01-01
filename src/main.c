/*
** main.c for Medev in /home/thormster/Dev/Melev/src
** 
** Made by thormster
** Login   <thormster@localhost>
** 
** Started on  Sat Dec 28 23:31:04 2019 thormster
** Last update Wed Jan  1 14:39:13 2020 thormster
*/

#include	"melev.h"

void		command_not_found(char *cmd)
{
  xputstr(cmd);
  xputstr(": command not found\n");
}

int		treatment(t_melev *melev, char *cmd)
{
  if ((get_set_path(melev)) == ERR)
    return (ERR);
  if ((xstrncmp(cmd, "exit", 4)) == 0)
    return (42);
  else if ((xstrncmp(cmd, "pwd", 4)) == 0)
    return (pwd(melev));
  else if ((xstrncmp(cmd, "env", 4)) == 0)
    return (display_env(melev));
  else
    command_not_found(cmd);
  return (0);
}

t_melev		*init_struct(int ac, char **av, char **env)
{
  t_melev	*melev;

  ac = ac;
  av = av;
  melev = NULL;
  if ((melev = xmalloc(sizeof(t_melev))) == NULL)
    return (NULL);
  if ((melev->xenv = my_env_cpy(env)) == NULL)
    return (NULL);
  melev->xpath = NULL;
  return (melev);
}

void		clean_before_exit(t_melev *melev, char *tmp)
{
  xfree(tmp);
  xfree_tab(melev->xenv);
  xfree(melev);
  exit(0);  
}

int		main(int ac, char **av, char **envp)
{
  t_melev	*melev;
  char		*buf;

  if ((melev = init_struct(ac, av, envp)) == NULL)
    return (ERR);
  while (1)
    {
      xprompt();
      if ((buf = bufferization()) == NULL)
	return (ERR);
      if ((treatment(melev, buf)) == 42)
	clean_before_exit(melev, buf);
      xfree(buf);
    }
  return (0);
}
