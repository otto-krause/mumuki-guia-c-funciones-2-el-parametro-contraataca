describe ("Prueba de función") 
{
  it ("[0,1,1,2,3,5,8,13,21,34] Pertenece a la sucesión fibonacci") 
  {
    int v[10]={0,1,1,2,3,5,8,13,21,34};
    should_bool(esFibonacci(v)) be equal to(true);
  } end
  
  it ("[89,144,233,377,610,987,1597,2584,4181,6765] Pertenece a la sucesión fibonacci") 
  {
    int v[10]={89,144,233,377,610,987,1597,2584,4181,6765};
    should_bool(esFibonacci(v)) be equal to(true);
  } end
  
    it ("[0,1,2,3,4,5,6,7,8,9] No pertenece a la sucesión fibonacci") 
  {
    int v[10]={0,1,2,3,4,5,6,7,8,9};
    should_bool(esFibonacci(v)) be equal to(false);
  } end
  
  
} end