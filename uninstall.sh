## uninstall.sh for Melev in /home/thormster/Téléchargements/Melev/Melev-master
## 
## Made by thormster
## Login   <thormster@localhost>
## 
## Started on  Wed Jan  1 22:52:02 2020 thormster
## Last update Wed Jan  1 22:52:13 2020 thormster
##

#!/bin/bash

if [ -f "./lib/Makefile" ];
then
    make -C ./lib/ fclean
fi
if [ -f "./lib/Makefile" ];
then
    make -C ./ fclean
fi
