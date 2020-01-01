/*
** xmalloc.c for Medev in /home/thormster/Dev/Melev/lib
** 
** Made by thormster
** Login   <thormster@localhost>
** 
** Started on  Sat Dec 28 23:30:09 2019 thormster
** Last update Sat Dec 28 23:30:10 2019 thormster
*/

#include	"lib.h"

void		*xmalloc(size_t size)
{
  void		*ptr;

  if ((ptr = malloc(size)) == NULL)
    {
      perror("malloc");
      return (NULL);
    }
  return (ptr);
}
