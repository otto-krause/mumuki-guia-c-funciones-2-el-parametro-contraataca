describe ("Prueba de función") 
{
  it ("La sumatoria de [1,2,3,4,5,6,7,8,9,10] es 55")
  {
    int v[10] = {1,2,3,4,5,6,7,8,9,10};
    should_int(sumatoria(v)) be equal to(55);
  } end
  
  it ("La sumatoria de [1,1,1,1,1,1,1,1,1,1] es 10")
  {
    int v2[10] = {1,1,1,1,1,1,1,1,1,1};
    should_int(sumatoria(v2)) be equal to(10);
  } end
} end