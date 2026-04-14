# 00 - C Hello World

## Objetivo
Instalar, configurar y probar un compilador compatible con C23.

## Compilador utilizado
- Compilador: GCC
- Versión(`gcc --version`): `gcc (GCC) 15.2.1 20260123 (Red Hat 15.2.1-7)`
- Estándar: C23 (`-std=c23`)

## Programa
Se desarrolló un programa simple que imprime "Hello, World!" por salida estándar.

## Compilación
- `make` -> Compila el programa y genera el ejecutable **hello**
- `make run` -> Ejecuta el programa y escribe por consola el resultado
- `make outputFile` -> Ejecuta el programa **hello** y el output sale al **output.txt**
- `make clean` -> Borra el ejecutable que genera el **make** y también el **output.txt**

## Resultado
### Tanto en **Terminal** como el archivo **output.txt** muestran lo mismo:

```text
Hello, World!
Version de lenguaje C23: 202311
```