#!/bin/bash
echo "Enter the number"
read num
if [ "$num" -gt 10 ]; then
echo "Number is greater than 10"
elif [ "$num" -lt 10 ]; then
echo "number is less than 10"
else
echo " Number is 10"
fi
sleep 5
