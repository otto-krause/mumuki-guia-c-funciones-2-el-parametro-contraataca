describe ("Prueba de función") 
{
  it ("El vector [1,2,3,4,5,6,7,8,9,10] dado vuelta es [10,9,8,7,6,5,4,3,2,1]")
  {
    int v[10] = {1,2,3,4,5,6,7,8,9,10};
    int v2[10] = {10,9,8,7,6,5,4,3,2,1};
    int dadoVuelta[10];
    darVuelta(v,dadoVuelta);
    for(int i=0; i<10;i++)
      should_int(dadoVuelta[i]) be equal to(v2[i]);
  } end
  
} end