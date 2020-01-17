describe ("Prueba de función") 
{
  it ("El prod escalar entre {1,2,3,4,5,6,7,8,9,10} y {5,5,7,8,6,9,1,2,3,11} es 312")
  {
    int v2[10] = {1,2,3,4,5,6,7,8,9,10};
    int v1[10] = {5,5,7,8,6,9,1,2,3,11};
    should_int(productoEscalar(v1,v2)) be equal to(312);
  } end
  
} end