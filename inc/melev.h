/*
** melev.h for Medev in /home/thormster/Dev/Melev/inc
** 
** Made by thormster
** Login   <thormster@localhost>
** 
** Started on  Sat Dec 28 23:29:24 2019 thormster
** Last update Wed Jan  1 14:38:58 2020 thormster
*/

#ifndef		__MELEV_H__
#define		__MELEV_H__

#include	<stdlib.h>
#include	"lib.h"

#define		BUFSZ	128
#define		ERR	-1
#define		PROMPT	"?> "

extern char	**env;

typedef	struct	s_melev
{
  char		**xenv;
  char		**xpath;
}		t_melev;

/* buffer.c */
char		*bufferization();


/* env.c */
char		**my_env_cpy(char**);
char		*get_env_var_value(char*);
int		get_env_var_pos(char**, char*);
int		display_env(t_melev*);


/* my_str_to_wordtab.c */
int		word_len(char*, int, char);
int		word_count(char*, char);
char		**my_str_to_wordtab(char*, char);


/* path.c */
int		get_set_path(t_melev*);


/* prompt.c */
void		xprompt();


/* pwd.c */
int		pwd(t_melev*);


/* main.c */
int		treatment(t_melev*, char*);
void		command_not_found(char*);
void		clean_before_exit(t_melev*, char*);
t_melev		*init_struct(int, char**, char**);

#endif
