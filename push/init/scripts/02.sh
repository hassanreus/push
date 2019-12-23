#!/bin/bash

GREEN='\033[0;32m'
RED='\033[0;31m'
Comp=$(cut -d: -f1,3 /etc/passwd | egrep ':[0-9]{4}$' | cut -d: -f1 | tr ' ' '\n' | sed '2,9999d')
PID=$(cut -d: -f1,3 /etc/passwd | egrep ':[0-9]{4}$' | cut -d: -f2 | tr ' ' '\n' | sed '2,9999d')
ARGC=$#
User=$1

if [ $ARGC -eq 1 ]
then
case $Comp in $User*)
	pkill $PID
	echo -e "${GREEN}Process has been killed."
	sudo userdel -r $User
	echo -e "${REEN}User successfully delete.";;
*)
	echo -e "${RED}User doesn't exist.";;
esac
else
	echo "usage: Add user to delete"
	if [ -z "$Comp" ]; then
		echo "Zero User."
	else
		echo -e "User to delete ${RED}$Comp."
	fi
fi
