#! /bin/bash

read -n 1 character

if [[ "$character" == "y" ]] || [[ "$character" == "Y" ]]; then
    echo "YES"
elif [[ "$character" == "n" ]] || [[ "$character" == "N" ]]; then
    echo "NO"
fi
