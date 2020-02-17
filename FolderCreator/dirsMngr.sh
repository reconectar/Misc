#!/bin/bash

# Folder manager

echo "1. Folder creator"
echo "2. Folder deleter"
echo "Any. Exit"
read -p "Enter desired option: " option

if(($option == "1"))
then
	option="mkdir"
	optionAction="created"
	init=$(($(find . -maxdepth 1 -type d | wc -l)-1))
elif(($option == "2"))
then
	option="rm -rf"
	optionAction="deleted"
	init=1
else
	exit 1
fi


if [ -z "$1" ]
then
	read -p "Enter the number of folders: " range
else
	range=$1
fi
for ((i=$init; i< range+init; i++))
do
	$option $i
done

echo $range folders $optionAction!
