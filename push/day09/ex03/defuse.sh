touch -A '-000001' "bomb.txt" | stat -r "bomb.txt"| awk '{print$9}'
