Para compilar en linux (es necesario GTK)

desde la linea de comandos en este directorio

gcc `pkg-config --cflags gtk+-3.0` -o what_words what_words.c `pkg-config --libs gtk+-3.0`

./what_words


Por implementar:

Pantalla de inicio

botones
listener del teclado para salir
descripcion corta de como jugar al juego

Pantalla del juego

textboxes y textviews
listener del teclado para introducir caracteres y opciones como salir
