describe ("Prueba de función") 
{
  it ("El promedio de [1,2,3,4,5,6,7,8,9,10] es 5")
  {
    int v[10] = {1,2,3,4,5,6,7,8,9,10};
    should_int(promedio(v)) be equal to(sumatoria(v)/10);
  } end
  
  it ("El promedio de [1,1,1,1,1,1,1,1,1,1] es 1")
  {
    int v2[10] = {1,1,1,1,1,1,1,1,1,1};
    should_int(promedio(v2)) be equal to(sumatoria(v2)/10);
  } end
} end