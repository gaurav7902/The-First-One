#!/bin/bash
echo "enter department name"
read dept
if [ -z "$dept" ]; then
        echo "Dept not entered it will be searched only acc to Year"
fi
echo "enter year"
read year
if [ -z "$year" ]; then
        echo "year not entered !!"
fi
if [ -z "$dept" ] && [ -z "$year" ]; then
        echo "you have entered nothing to search. this will show you whole file"
fi
i=0
echo "file name"
read file
while [ ! -f "$file" ] && [ $i -lt 4 ]; do
        echo -e "file does nor exist \n enter again \n ( $(( 4 - i)) attempts remaining ) "
        read file
        i=$((i + 1))
done
if [ $i -gt 3 ]; then
        exit 1
fi
head -n 1 $file | cut -d ',' -f 1,2,3
tail  -n +2 $file | grep -i  "$year" | grep -i "$dept" | cut -d ',' -f 1,2,5
echo "End"


