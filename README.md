## Printf


## Descripción

Este proyecto es una implementación personalizada de la función `printf` en C. La función `printf` se utiliza para imprimir datos en la salida estándar (normalmente la consola) con un formato específico.

## Características

- Soporte para diferentes especificadores de formato (`%d`, `%s`, `%c`, `%f`, etc.)
- Manejo de caracteres de escape
- Gestión de ancho y precisión de los formatos
- Implementación eficiente y optimizada

## Instalación

Para utilizar esta implementación de `printf` en tu proyecto, simplemente clona este repositorio y compílalo junto con tu código fuente.

```bash
git clone https://github.com/miguelfdez03/Printf.git
cd Printf
make
```

## Tests

Para utilizar mis tests implementados tengo una regla en el makefile que es make test te doy los pasos a seguir para que puedas usarlos
```bash
git clone https://github.com/miguelfdez03/Printf.git
cd Printf
make
make test
./test_printf
```

## Uso

Aquí tienes un ejemplo de cómo usar la función `printf` personalizada en tu código:

```c
#include "printf.h"

int main() {
    int numero = 42;
    char *cadena = "Hola, mundo!";
    char caracter = 'A';
    float flotante = 3.14;

    printf("Número: %d\n", numero);
    printf("Cadena: %s\n", cadena);
    printf("Caracter: %c\n", caracter);
    printf("Flotante: %.2f\n", flotante);

    return 0;
}
```

## Contribuciones

Las contribuciones son bienvenidas. Si deseas mejorar esta implementación de `printf`, siéntete libre de abrir un issue o enviar un pull request.

## Licencia

Este proyecto está licenciado bajo la Licencia MIT. Para más detalles, consulta el archivo [LICENSE](LICENSE).

## Contacto

Para cualquier duda o sugerencia, puedes contactarme a través de [mi perfil de GitHub](https://github.com/miguelfdez03).

---

¡Gracias por utilizar esta implementación de `printf`! Espero que te sea de gran ayuda en tus proyectos en C.

---


- LinkedIn: https://www.linkedin.com/in/miguelfdezmunoz

---

Nota: Este repositorio se sube con el propósito de compartir mi progreso y ofrecer un recurso orientativo para aquellos que necesiten ayuda en su aprendizaje. Espero que se utilice como base de estudio y no solo para copiar y pegar soluciones.
<p align="center">🚀 Never stop learning!</p>
