# Biblioteca Estándar de C++

La Biblioteca Estándar de C++ es una colección de clases y funciones que se incluyen con el compilador de C++. Estas bibliotecas proporcionan una amplia gama de funcionalidades que facilitan el desarrollo de aplicaciones.

## ¿Qué son las librerías?

Las librerías son conjuntos de funciones y clases predefinidas que los desarrolladores pueden utilizar para realizar tareas comunes sin tener que escribir el código desde cero. 

## ¿Para qué sirven?

Las librerías sirven para:
- Reutilizar código.
- Ahorrar tiempo y esfuerzo.
- Asegurar que el código sea más robusto y eficiente.
- Facilitar el mantenimiento y la legibilidad del código.

## Algunas librerías y sus funciones

### Librería `<iostream>`

La librería `<iostream>` proporciona facilidades para la entrada y salida estándar en C++, como `std::cin` para la entrada y `std::cout` para la salida.

#### Ejemplo de uso:
```cpp
#include <iostream>

int main() {
    std::cout << "Introduce tu nombre: ";
    std::string nombre;
    std::cin >> nombre;
    std::cout << "Hola, " << nombre << "!" << std::endl;
    return 0;
}
```

### Librería `<string>`

La librería `<string>` proporciona la clase `std::string` que permite trabajar con cadenas de caracteres de manera más sencilla y segura que con los arreglos de caracteres tradicionales.

#### Ejemplo de uso:
```cpp
#include <iostream>
#include <string>

int main() {
    std::string saludo = "Hola, mundo!";
    std::cout << saludo << std::endl;
    return 0;
}
```

### Librería `<cmath>`

La librería `<cmath>` incluye funciones matemáticas comunes como `sqrt` (raíz cuadrada), `pow` (potencia), `sin` (seno), `cos` (coseno), entre otras.

#### Ejemplo de uso:
```cpp
#include <iostream>
#include <cmath>

int main() {
    double numero = 9.0;
    double raiz = std::sqrt(numero);
    std::cout << "La raíz cuadrada de " << numero << " es " << raiz << std::endl;
    return 0;
}
```

### Librería `<vector>`

La librería `<vector>` proporciona la clase `std::vector`, que es una secuencia de elementos que puede cambiar de tamaño dinámicamente.

#### Ejemplo de uso:
```cpp
#include <iostream>
#include <vector>

int main() {
    std::vector<int> numeros = {1, 2, 3, 4, 5};
    for (int numero : numeros) {
        std::cout << numero << " ";
    }
    std::cout << std::endl;
    return 0;
}
```

### Librería `<algorithm>`

La librería `<algorithm>` incluye una colección de funciones para realizar operaciones sobre contenedores, como búsqueda, ordenación y manipulación de datos.

#### Ejemplo de uso:
```cpp
#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::vector<int> numeros = {5, 3, 1, 4, 2};
    std::sort(numeros.begin(), numeros.end());
    for (int numero : numeros) {
        std::cout << numero << " ";
    }
    std::cout << std::endl;
    return 0;
}
```

### Librería `<map>`

La librería `<map>` proporciona la clase `std::map`, que es un contenedor asociativo que almacena pares clave-valor con claves únicas.

#### Ejemplo de uso:
```cpp
#include <iostream>
#include <map>

int main() {
    std::map<std::string, int> edades;
    edades["Juan"] = 25;
    edades["Ana"] = 30;
    edades["Luis"] = 20;

    for (const auto& par : edades) {
        std::cout << par.first << " tiene " << par.second << " años." << std::endl;
    }
    return 0;
}
```

## Cómo usar las librerías

Para usar una librería en C++, debes incluirla en tu archivo fuente utilizando la directiva `#include`. Por ejemplo, para incluir la librería `<string>`, escribirías `#include <string>` al inicio de tu archivo.

### Ejemplo completo:
```cpp
#include <iostream>
#include <string>
#include <cmath>

int main() {
    std::string nombre = "Platzi";
    double numero = 16.0;
    double raiz = std::sqrt(numero);

    std::cout << "Hola, " << nombre << "!" << std::endl;
    std::cout << "La raíz cuadrada de " << numero << " es " << raiz << std::endl;

    return 0;
}
```

En este ejemplo, se utilizan tanto la librería `<string>` como la librería `<cmath>` para demostrar cómo se pueden combinar múltiples librerías en un solo programa.