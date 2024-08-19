#! /bin/bash

read x 
read y

suma=$(( x + y ))
resta=$(( x - y ))
multiplicacion=$(( x * y ))
division=$(( x / y ))

echo -e "$suma\n$resta\n$multiplicacion\n$division\n"