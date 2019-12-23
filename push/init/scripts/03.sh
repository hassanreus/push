#!/bin/bash

RED='\033[0;31m'
GREEN='\033[0;32m'
NC='\033[0m'
WORD="0"
PASSWORD_WRONG=1
one="Clear Cache."
two="Search for profil Intra."
three="Update your machine."
select="One Two Three"

while [ $PASSWORD_WRONG == 1 ]
do
	echo "Enter your passwords :"
	read -s ENTERED_PASSWORD
	if [ "$WORD" != "$(echo $ENTERED_PASSWORD)" ]
	then
		echo "Access Denied : Try again"
	else
		clear
		echo -e "				${GREEN}© ${RED}HSF KILLER					    ${GREEN}\n${NC}Please Select :\n${RED}1 - ${one}	${RED}2 - ${two}	${RED}3 - ${three}	${GREEN}"
		echo "Choose by enter a digital number :"
		select s in $select
		do
			case $s in
				One)
					clear
					echo You select ${one}
					sync; echo 3 > /proc/sys/vm/drop_caches
					echo Done
					exit
					;;
				Two)
					clear
					echo You select ${two}
					echo Enter a user :
					read User
					proxychains firefox "https://profile.intra.42.fr/searches/search?query=$User"
					exit
					;;
				Three)
					clear
					echo You select ${four}
					apt-get update
					apt-get upgrade
					exit
					;;
			esac
		done	
		PASSWORD_WRONG=0
	fi
done
