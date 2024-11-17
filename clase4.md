A diferencia de Windows, el compilador de C++ viene instalado normalmente por defecto en la mayoría de sistemas operativos Linux.

Para verificar que tenemos instalado el compilador podemos ejecutar en la terminal el comando:

```sh
gcc -v
```

En caso de que no te mostrara un resultado significa que no lo tienes instalado. Instalar el compilador es bastante sencillo, los comandos varían dependiendo del sistema operativo que tengas instalado.

### Ubuntu
```sh
sudo apt-get install g++
```

### Fedora/RHEL
```sh
sudo dnf install gcc-c++
```

## Extensiones para Visual Studio Code

Para tener nuestro entorno de desarrollo completamente listo, solo debemos instalar dos extensiones para nuestro editor Visual Studio Code.

### C/C++

Esta extensión nos otorgará muchas utilidades para poder programar en C++ como reconocimiento de sintaxis y alerta de errores.

C/C++ Extension

### C/C++ Compile Run

Con esta extensión podremos compilar y ejecutar nuestros programas de C++ con tan solo presionar la tecla F6.

C/C++ Compile Run Extension

¡Genial! Ya tienes todo lo necesario para empezar a programar en este lenguaje. Nos vemos en la siguiente clase.