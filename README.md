# libft

Este proyecto consiste en programar una librería en C.

| **Función**         | **Descripción** | **Parámetros** | **Retorno** |
|---------------------|---------------|---------------|------------|
| `ft_isalpha`       | Verifica si un carácter es alfabético | `int c` | `1` si es alfabético, `0` si no |
| `ft_isdigit`       | Verifica si un carácter es un dígito | `int c` | `1` si es dígito, `0` si no |
| `ft_isalnum`       | Verifica si un carácter es alfanumérico | `int c` | `1` si es alfanumérico, `0` si no |
| `ft_isprint`       | Verifica si un carácter es imprimible | `int c` | `1` si es imprimible, `0` si no |
| `ft_isascii`       | Verifica si un carácter pertenece a ASCII | `int c` | `1` si es ASCII, `0` si no |
| `ft_toupper`       | Convierte un carácter en mayúscula | `int c` | Carácter en mayúscula o sin cambios |
| `ft_tolower`       | Convierte un carácter en minúscula | `int c` | Carácter en minúscula o sin cambios |
| `ft_strlen`        | Calcula la longitud de una cadena | `const char *s` | Longitud de la cadena |
| `ft_strchr`        | Busca un carácter en una cadena (primera ocurrencia) | `const char *s, int c` | Puntero a la posición del carácter o `NULL` |
| `ft_strrchr`       | Busca un carácter en una cadena (última ocurrencia) | `const char *s, int c` | Puntero a la posición del carácter o `NULL` |
| `ft_strncmp`       | Compara dos cadenas hasta un número de caracteres | `const char *s1, const char *s2, size_t n` | Diferencia entre caracteres o `0` si son iguales |
| `ft_memset`        | Rellena un bloque de memoria con un valor | `void *s, int c, size_t n` | Puntero a la memoria modificada |
| `ft_bzero`         | Llena un bloque de memoria con ceros | `void *s, size_t n` | `void` |
| `ft_memcpy`        | Copia un bloque de memoria | `void *dst, const void *src, size_t n` | Puntero al destino |
| `ft_memmove`       | Copia un bloque de memoria con soporte para solapamiento | `void *dst, const void *src, size_t n` | Puntero al destino |
| `ft_memchr`        | Busca un byte en un bloque de memoria | `const void *s, int c, size_t n` | Puntero a la posición encontrada o `NULL` |
| `ft_memcmp`        | Compara dos bloques de memoria | `const void *s1, const void *s2, size_t n` | Diferencia entre bytes o `0` si son iguales |
| `ft_strlcpy`       | Copia una cadena con límite de tamaño | `char *dst, const char *src, size_t size` | Longitud de la cadena fuente |
| `ft_strlcat`       | Concatena cadenas con límite de tamaño | `char *dst, const char *src, size_t size` | Longitud total de la cadena que se intentó crear |
| `ft_strnstr`       | Busca una subcadena dentro de otra con límite | `const char *haystack, const char *needle, size_t len` | Puntero al inicio de la subcadena o `NULL` |
| `ft_atoi`          | Convierte una cadena en un número entero | `const char *str` | Número entero |
| `ft_calloc`        | Asigna memoria y la inicializa a cero | `size_t count, size_t size` | Puntero a la memoria asignada o `NULL` |
| `ft_strdup`        | Duplica una cadena | `const char *s1` | Puntero a la nueva cadena duplicada |
| `ft_substr`        | Extrae una subcadena de una cadena dada | `const char *s, unsigned int start, size_t len` | Nueva subcadena o `NULL` |
| `ft_strjoin`       | Concatena dos cadenas en una nueva | `char const *s1, char const *s2` | Nueva cadena concatenada o `NULL` |
| `ft_strtrim`       | Elimina caracteres específicos al inicio y final de una cadena | `char const *s1, char const *set` | Nueva cadena sin los caracteres de `set` |
| `ft_split`         | Divide una cadena en un array de subcadenas | `char const *s, char c` | Puntero a un array de cadenas terminadas en `NULL` |
| `ft_itoa`          | Convierte un número entero a cadena | `int n` | Nueva cadena representando el número |
| `ft_strmapi`       | Aplica una función a cada carácter de una cadena | `char const *s, char (*f)(unsigned int, char)` | Nueva cadena transformada |
| `ft_striteri`      | Aplica una función a cada carácter de una cadena (modificable) | `char *s, void (*f)(unsigned int, char*)` | `void` |
| `ft_putchar_fd`    | Escribe un carácter en un descriptor de archivo | `char c, int fd` | `void` |
| `ft_putstr_fd`     | Escribe una cadena en un descriptor de archivo | `char *s, int fd` | `void` |
| `ft_putendl_fd`    | Escribe una cadena seguida de un salto de línea | `char *s, int fd` | `void` |
| `ft_putnbr_fd`     | Escribe un número en un descriptor de archivo | `int n, int fd` | `void` |
| `ft_lstnew`        | Crea un nuevo nodo de lista enlazada | `void *content` | Nuevo nodo o `NULL` |
| `ft_lstadd_front`  | Agrega un nodo al inicio de la lista | `t_list **lst, t_list *new` | `void` |
| `ft_lstsize`       | Cuenta el número de nodos en una lista | `t_list *lst` | Número de nodos |
| `ft_lstlast`       | Obtiene el último nodo de la lista | `t_list *lst` | Último nodo o `NULL` |
| `ft_lstadd_back`   | Agrega un nodo al final de la lista | `t_list **lst, t_list *new` | `void` |
| `ft_lstdelone`     | Elimina un nodo de la lista y libera memoria | `t_list *lst, void (*del)(void*)` | `void` |
| `ft_lstiter`       | Itera sobre una lista aplicando una función a cada nodo | `t_list *lst, void (*f)(void *)` | `void` |
| `ft_lstmap`        | Crea una nueva lista aplicando una función a cada nodo | `t_list *lst, void *(*f)(void *), void (*del)(void *)` | Nueva lista o `NULL` |
