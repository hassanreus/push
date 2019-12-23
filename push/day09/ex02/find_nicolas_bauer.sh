grep -i 'nicolas[[:blank:]]bauer' | rev | awk '{print$2}' | rev | sed '1d'
