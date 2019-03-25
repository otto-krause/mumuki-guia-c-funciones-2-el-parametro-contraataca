Veamos el siguiente código:

``` c
void sumarUno(int vect[10])
{
  int vect2[10] = {0};
  for(int i=0; i<10; i++)
    vect2[i] = vect[i] + 1;
    
}

void main()
{
  int v[10] = {1,2,3,4,5,6,7,8,9,10};
  sumarUno(v);
  
  for(int i=0; i<10; i++)
    printf("%d\n",v[i]);
}

```

¿Que hace este código?

1. Crea el vector **v** en la main.
2. Se llama a la funcion **sumarUno**, la cual le suma 1 a todos sus elementos..
3. Imprime los elementos del vector **v2**.

Detalles a tener en cuenta:

* Cada vez que se crea un vector, automáticamente se crea un puntero con el mismo nombre del vector, ver la segunda línea de la main. <br>Ese puntero siempre apunta a la primer posición del vector.
* Los valores finales de **v** son [2,3,4,5,6,7,8,9,10,11].
* Otra forma de pasar vectores por parametros es simplemente pasando un puntero, es decir que:<br>
   **void sumarUno(int * vect)**<br>
  También es una opción válida.
* Se pueden hacer FORs sin llaves, siempre y cuando tengan una sola línea.