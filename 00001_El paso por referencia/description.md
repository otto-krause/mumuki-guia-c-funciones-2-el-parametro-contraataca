Si llegaste hasta acá suponemos que ya viste la guía de punteros, así que vamos a arrancar desde ahí.
<br><br>
Te acordás del paso de parámetros por copia?<br> Cuando hacíamos esto se creaba una **copia local** dentro la función, entonces vimos que después de ejecutar la función, las variables que pasamos por parámetro no sufrían ningún cambio cuando las volvíamos a usar en la main.
<br><br>
Eso está por cambiar, a partir de ahora también vamos a utilizar el **paso por referencia**, que consiste en pasar punteros como parámetros. Mirá el siguiente ejemplo:
<br>

``` c
void dividirPor2(int * num)
{
  *num = (*num) / 2
}

void main()
{
  int num = 8;
  dividirPor2(&num);
  printf("num vale: %d",num);
}
```
La pregunta ahora es ¿Que imprime este programa?<br>
La respuesta es **4**. <br><br>
Esto se debe a que a la función directamente le pasamos la dirección de memoria, es decir, va a modificar los valores directamente a memoria. Y como los modifica en memoria, los cambios también afectan al valor de la main!<br> Esto podría servirte para un montón de cosas, esperamos que sepas usarlo bien.
