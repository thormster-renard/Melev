## install.sh for Melev in /home/thormster/Téléchargements/Melev/Melev-master
## 
## Made by thormster
## Login   <thormster@localhost>
## 
## Started on  Wed Jan  1 22:51:30 2020 thormster
## Last update Wed Jan  1 22:51:48 2020 thormster
##

#!/bin/sh

if [ -f "./lib/Makefile" ];
then
    echo "[MELEV]....................................................Compilation de la librairie"
    make -C ./lib/
else
    echo "[ERROR] Le fichier Makefile n'est pas dans accessible"
fi

if [ -f "./Makefile" ];
then
    echo "[MELEV].............................................................................OK"
    echo "[MELEV]........................................................Compilation de Melev v1"
    make -C ./
else
    echo "[ERROR] Le fichier Makefile n'est pas dans accessible"
fi
