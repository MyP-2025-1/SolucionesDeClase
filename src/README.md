# Problema -> Lemonade Stand

Link del problema: https://leetcode.com/problems/lemonade-change/description/?envType=daily-question&envId=2024-08-15

## Idea de la solución

Tener un diccionario de Int, Int para llevar la cuenta de cuántos billetes se está ingresando en un puesto de limonada. El enunciado del problema es relativamente sencillo, supongamos
que todas las limonadas cuestan lo mismo $5 y que en este problema, los clientes solo van a pagar su limonada con billetes de las siguientes denominaciones: $5, $10 y $20. Como el puesto
de limonada está iniciando, se tiene que inicialmente no se tiene ningún billete pero se quiere saber si se va a poder atender a todos los clientes, dándoles su respectivo cambio
con el dinero que ya se haya ganado.

La entrada consta de un arreglo de enteros que solo va a estar conformado de 5, 10 o 20 y se debe determinar si se le puede entregar el cambio a todos los clientes o no a manera de
la imprenta de un booleano.

# Implementación de la solución

La solución está redactada en Java, por simplicidad respecto al lenguaje que los alumnos manejan, escrita en el archivo Main.java
