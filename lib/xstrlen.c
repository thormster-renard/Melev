/*
** xstrlen.c for Medev in /home/thormster/Dev/Melev/lib
** 
** Made by thormster
** Login   <thormster@localhost>
** 
** Started on  Sat Dec 28 23:30:37 2019 thormster
** Last update Sat Dec 28 23:30:38 2019 thormster
*/

#include	"lib.h"

int		xstrlen(char *s)
{
  int		i;

  i = 0;
  while (s[i] != '\0')
    i += 1;
  return (i);
}
