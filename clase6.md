# Tipos de datos en C++

## Tipos de datos

### Bool (Boolean):
- Valor lógico
- Puede ser Verdadero o Falso
- Tamaño: 4 bytes

#### Razones para el tamaño de 4 bytes:
En C++, el tipo de dato `bool` está diseñado para representar valores lógicos, es decir, `true` o `false`. Aunque conceptualmente un booleano solo necesita un bit para almacenar dos posibles valores, en la práctica, los compiladores de C++ suelen alinearlo a 4 bytes (32 bits) por razones de eficiencia y alineación de memoria.

1. **Alineación de memoria**: Los procesadores modernos están optimizados para acceder a la memoria en bloques de 4 bytes (o más). Usar 4 bytes para un `bool` puede mejorar el rendimiento al evitar accesos a memoria desalineados.
2. **Compatibilidad**: Mantener un tamaño consistente de 4 bytes para `bool` puede simplificar la interoperabilidad con otros tipos de datos y estructuras en el programa.
3. **Eficiencia**: En algunos casos, manejar datos en bloques de 4 bytes puede ser más eficiente que manejar datos en tamaños más pequeños, debido a cómo los procesadores y la memoria caché están diseñados.


### Int (Integer):
- Números enteros
- Tamaño: 4 bytes

### Float:
- Números decimales (punto flotante)
- Tamaño: 4 bytes

### Double:
- Números de punto flotante de doble precisión
- Tamaño: 8 bytes (4+4 = doble flotante)

### Char (Character):
- Carácter (ASCII)
- Muestra el carácter o su número en ASCII
- Tamaño: 4 bytes

### También tenemos:
- Short Int
- Unsigned Int
- Long Double

**Nota:** los rangos de cada tipo de dato. No lo mencionan a fondo en la clase, pero es bueno saberlo. Más bien, acá dejaré una tablita:

| Tipo de Dato   | Tamaño (bytes) | Rango                          |
|----------------|----------------|--------------------------------|
| bool           | 4              | true o false                   |
| char           | 1              | -128 a 127                     |
| int            | 4              | -2,147,483,648 a 2,147,483,647 |
| float          | 4              | ±1.5 x 10^−45 a ±3.4 x 10^38   |
| double         | 8              | ±5.0 x 10^−324 a ±1.7 x 10^308 |
| short int      | 2              | -32,768 a 32,767               |
| unsigned int   | 4              | 0 a 4,294,967,295              |
| long double    | 12             | ±3.4 x 10^−4932 a ±1.1 x 10^4932|
