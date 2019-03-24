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
  
}

```
