# !/bin/bash

for (( i=0; i<10; i++ ))
do
	ARG=$(shuf -i 0-50 -n 10) && ./a.out $ARG
	echo "ARG" && echo $ARG
done
