cmake_minimum_required(VERSION 3.26)
project(Ejercicio_2)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

# Agrega aquí los archivos fuente necesarios para tu proyecto
set(SOURCES
        main.cpp
        triangulo.cpp
        circulo.cpp
        circulo.h
        triangulo.h
)

# Configuración de las opciones de compilación condicional
option(COMPILAR_TRIANGULO "Compilar solo la parte del triángulo" ON)
option(COMPILAR_CIRCULO "Compilar solo la parte del círculo" OFF)

# Agrega las fuentes necesarias según las opciones de compilación condicional
if(COMPILAR_TRIANGULO)
    list(REMOVE_ITEM SOURCES circulo.cpp)
elseif(COMPILAR_CIRCULO)
    list(REMOVE_ITEM SOURCES triangulo.cpp)
endif()

# Compilación del programa
add_executable(programa ${SOURCES})