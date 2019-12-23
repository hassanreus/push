#!/bin/bash

read -p "Saisir ip : " ip
read -p "Saisir gateway : " gateway

sudo apt -o Acquire::Check-Valid-Until=false update -y && sudo apt upgrade -y
sudo apt install vim ccze ansible zip unzip -y
unzip ansible.zip
find ./ansible -type f -exec sed -i "s/{{ ip }}/$ip/g" {} +
find ./ansible -type f -exec sed -i "s/{{ gateway }}/$gateway/g" {} +
ansible-playbook -i ansible/hosts ansible/rs1.yml --user=hessaddo --extra-vars "ansible_sudo_pass=5123123"
