/*
** xfree.c for Medev in /home/thormster/Dev/Melev/lib
** 
** Made by thormster
** Login   <thormster@localhost>
** 
** Started on  Sat Dec 28 23:29:42 2019 thormster
** Last update Sun Dec 29 22:17:34 2019 thormster
*/

#include	"lib.h"

void		xfree_tab(char **ptr)
{
  int		i;

  i = 0;
  while (ptr[i] != NULL)
    {
      xfree(ptr[i]);
      i += 1;
    }
  xfree(ptr);
}

void		xfree(void *ptr)
{
  if (ptr)
    free(ptr);
}
