/*
** xstrncmp.c for Medev in /home/thormster/Dev/Melev/lib
** 
** Made by thormster
** Login   <thormster@localhost>
** 
** Started on  Sat Dec 28 23:30:46 2019 thormster
** Last update Sun Dec 29 00:16:24 2019 thormster
*/

#include	"lib.h"

int		xstrncmp(char *s1, char *s2, int n)
{
  int		i;
  int		j;
	
  i = 0;
  j = 0;
  if (xstrlen(s1) != xstrlen(s2))
    return (1);
  while (s1[i] == s2[j] && s1[i] && s2[j] && (i < n && j < n))
  {
    i += 1;
    j += 1;
  }
  if ((s1[i] == '\0' && s2[j] == '\0') || (i == n && j == n))
    return (0);
  else if (s1[i] > s2[j])
    return (1);
  else
    return (ERR);
}
