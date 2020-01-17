describe ("Prueba de función") 
{
  it ("Con los viajes: [18,20,16.5,18,20,16.5,21,20,16.5,18] y un saldo de 100, puede viajar")
  {
    float v2[10] = {18,20,16.5,18,20,16.5,21,20,16.5,18};
    should_bool(puedeViajar(v2,100)) be equal to(true);
  } end
  
} end