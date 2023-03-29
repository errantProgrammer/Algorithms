#!/bin/bash

# Declaracion de variables:
carpeta=""
lenguaje=""
directorio=""

read -p "Ingrese el Nombre de la carpeta: " carpeta

if [ $carpeta != "CodeWars" ] && [ $carpeta != "LeetCode" ] && [ $carpeta != "EulerProject" ]; then
    echo "No existe la carpeta"
    exit 1
fi

read -p "Ingrese el lenguaje de programacion: " lenguaje

if [ $lenguaje != "CPP" ] && [ $lenguaje != "Python" ]; then
    echo "No existe el lenguaje de programacion"
    exit 1
fi

# Deberia de pasarlo case
if [ $carpeta = "CodeWars" ]; then
    # Declaracion de variables
    nombre=""
    nivel=""
    
    read -p "Ingrese el kyu del problema: " nivel
    read -p "Ingrese el nombre del programa: " nombre
    directorio="$carpeta/${nivel}kyu/$lenguaje/$nombre"

elif [ $carpeta = "LeetCode" ]; then

    pregunta=""
    read -p "Ingrese el numero de la pregunta: " pregunta
    directorio="$carpeta/$lenguaje/leetCode$pregunta"

elif [ $carpeta = "EulerProject" ]; then
    pregunta=""
    read -p "Ingrese el numero de la pregunta(XXXX): " pregunta
    directorio ="$carpeta/$lenguaje/leetCode$pregunta"
fi

# Extension del archivo
case $lenguaje in
    'CPP')
        directorio="$directorio.cpp"
    ;;
    'Python')
        directorio="$directorio.py"
    ;;
esac

echo "El directorio es $directorio"

answer=""
read -p "El directorio es correcto? (yes/no): " answer

if [ $answer = "yes" ]; then
    cp main $directorio
else
    echo "Se acabo el programa"
    exit 1
fi

echo "Muchas gracias por usar el programa"