/*
** xputstr.c for Medev in /home/thormster/Dev/Melev/lib
** 
** Made by thormster
** Login   <thormster@localhost>
** 
** Started on  Sat Dec 28 23:30:00 2019 thormster
** Last update Sat Dec 28 23:30:01 2019 thormster
*/

#include	"lib.h"

void		xputstr(char *s)
{
  int		i;

  i = 0;
  while (s[i] != '\0')
    {
      xputchar(s[i]);
      i += 1;
    }
}
