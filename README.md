[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/mi1WNrHU)
# Waiting the dead

## Descripción del Proyecto

Este proyecto de C++ implementa un juego basado en consola llamado "Waiting the Death". Es un juego de azar donde los jugadores apuestan a números. El juego presenta tanto un modo de un solo jugador contra un personaje de IA llamado CEA, como modos multijugador para dos o tres jugadores.

Propósito del Juego
El propósito principal del juego es simular un escenario de apuestas de alto riesgo. En el modo de un solo jugador, el jugador intenta ganar contra CEA para obtener lo que "el mundo anhela" (que se revela ser dinero). En los modos multijugador, los jugadores compiten entre sí.}

Cómo Jugar

Iniciar el Juego: Al iniciar el juego, los jugadores son recibidos con el título "Waiting the Death" y se les pide que presionen una tecla para continuar.

Seleccionar Modo de Juego: Los jugadores eligen entre tres opciones: "solitario" (un jugador), "dos jugadores" (dos jugadores) o "tres jugadores" (tres jugadores).

Introducción (Un Jugador): Si se elige "solitario", el juego presenta a CEA, un "ser de grado 2 salido de la dimensión de la estática" que realiza apuestas ilegales. Se explica que ganar contra CEA otorga "lo que el mundo anhela".

El "Anhelo": El juego luego pregunta al jugador qué anhela todo el mundo. Si el jugador responde "dinero", se confirma que están en lo cierto. De lo contrario, el juego aclara que el dinero es la respuesta.

Mecánicas de Apuesta: Para ganar, los jugadores deben adivinar un número entre 1 y 3. En el modo de un solo jugador, tanto el jugador como CEA hacen sus suposiciones. En los modos multijugador, cada jugador hace su suposición.

Condiciones de Victoria/Derrota:

Un Jugador:

Si CEA llega a 10 puntos, CEA declara la victoria, afirmando que el alma del jugador es llevada a la dimensión de la que proviene CEA.

Si el jugador llega a 10 puntos, el jugador gana una gran suma de dinero ($100,000,000,000,000) y se le anima a gastarlo en vanidad.

Multijugador: El primer jugador en alcanzar 10 puntos gana. También hay una condición para un empate si dos jugadores alcanzan 10 puntos simultáneamente.

Las sentencias switch se utilizan para la navegación del menú y la visualización del texto introductorio.

Las sentencias if y else manejan la lógica condicional, como la verificación de las respuestas del jugador, la actualización de las puntuaciones y la determinación de los ganadores.

Los bucles while se utilizan para la validación de entrada, asegurando que los jugadores ingresen números dentro del rango especificado.

Los bucles do-while controlan las rondas principales del juego, continuando hasta que se alcanza una puntuación ganadora.
## Equipo


- **Nombre del equipo:** [Tung Tung Tung sahur.cpp]

### Integrantes del equipo

1- Nombre completo: Josue Adan Galan Zepada
Carnet: 00088825

2- Nombre completo: David Alejandro Cruz Caballero
Carnet: 00131025

3- Nombre completo: Anderson Daniel Hernandez Arucha
Carnet: 00014925

## Instrucciones de Ejecución

Clona este repositorio en tu máquina local:

git clone https://github.com/FDP-01-2025/project-tung-tung-tung-sahur-cpp.gitl
Navega al directorio del proyecto:
cd WaitingTheDeath 

Compila el código fuente:
g++ WaitingTheDeath.cpp -o WaitingTheDeath.exe (Para Windows)
g++ WaitingTheDeath.cpp -o WaitingTheDeath (Para Linux/macOS)

Ejecuta el programa:
./WaitingTheDeath.exe (Para Windows)
./WaitingTheDeath (Para Linux/macOS)