¿Alguna vez se te ocurrió crear una función que retorne un puntero? <br>¿Pensás que podría ser útil?<br><br>

La respuesta es sí, hacer eso es muy útil, ya que haciendo eso podriamos **retornar un vector**.
<br>
WTF?? <br><br>
Así es, veamos el siguiente código:

``` c
int * sumarUno(int vect[10])
{
  int vect2[10] = {0};
  for(int i=0; i<10; i++)
    vect2[i] = vect[i] + 1;
    
  return vect2;
}

void main()
{
  int v1[10] = {1,2,3,4,5,6,7,8,9,10};
  int v2[10];
  v2 = sumarUno(v1);
  
  for(int i=0; i<10; i++)
    printf("%d\n",v2[i]);
}

```

¿Que hace este código?

1. Crea el vector **v1** en la main.
2. Se llama a la funcion **sumarUno**, la que crea una copia del vector a la cual le suma 1 a todos sus elementos.
3. Almacena la copia modificada en el vector **v2**.
4. Imprime los elementos del vector **v2**.

Detalles a tener en cuenta:

* Cada vez que se crea un vector, automáticamente se crea un puntero con el mismo nombre del vector, ver la tercer línea de la main. <br>Ese puntero siempre apunta a la primer posición del vector.
* Si igualamos el puntero **v2** a la función, nos va a quedar almacenada una copia del primer vector, pero con todos sus elementos aumentados en 1.
* Los valores finales de **v2** son [2,3,4,5,6,7,8,9,10,11].
* Se pueden hacer FORs sin llaves, siempre y cuando tengan una sola línea.