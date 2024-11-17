# Ejecutar Código C++ en Sistemas Unix (Linux)

## Instalación de GCC

En la mayoría de las distribuciones de Linux, GCC (GNU Compiler Collection) viene preinstalado. Para verificar si GCC está instalado, puedes ejecutar el siguiente comando en la terminal:

```sh
gcc --version
```

Si GCC no está instalado, puedes instalarlo utilizando el gestor de paquetes de tu distribución. Por ejemplo, en distribuciones basadas en Debian/Ubuntu, puedes usar:

```sh
sudo apt update
sudo apt install build-essential
```

En distribuciones basadas en Red Hat/Fedora, puedes usar:

```sh
sudo dnf install gcc gcc-c++
```

## Compilar y Ejecutar Código C++

Para compilar un archivo de código fuente C++ (por ejemplo, `programa.cpp`), utiliza el siguiente comando:

```sh
g++ programa.cpp -o programa
```

Esto generará un archivo ejecutable llamado `programa`. Para ejecutar el programa, usa el siguiente comando:

```sh
./programa
```

## Comandos Adicionales

- **Compilar con depuración**: Para incluir información de depuración en el ejecutable, usa la opción `-g`:

    ```sh
    g++ -g programa.cpp -o programa
    ```

- **Compilar con optimización**: Para optimizar el código, usa la opción `-O` seguida del nivel de optimización (0, 1, 2, 3 o s):

    ```sh
    g++ -O2 programa.cpp -o programa
    ```

## Depuración

Para depurar programas C++, puedes usar `gdb` (GNU Debugger). Aquí hay un ejemplo básico de cómo usar `gdb`:

1. Compila el programa con la opción `-g` para incluir información de depuración:

     ```sh
     g++ -g programa.cpp -o programa
     ```

2. Inicia `gdb` con el ejecutable:

     ```sh
     gdb programa
     ```

3. Dentro de `gdb`, puedes usar comandos como `break` para establecer puntos de interrupción, `run` para ejecutar el programa, `next` para avanzar al siguiente línea de código, y `print` para mostrar el valor de las variables.

     ```sh
     (gdb) break main
     (gdb) run
     (gdb) next
     (gdb) print variable 
     ```

Para salir de `gdb`, usa el comando `quit`.
