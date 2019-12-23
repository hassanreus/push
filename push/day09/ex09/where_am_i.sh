#!/bin/bash

if ifconfig | grep "inet " | grep broadcat | awk '{print$2}'
then
		echo ifconfig | grep "inet " | grep broadcast | awk '{print$2}'
else
		echo "I am lost!"
fi
