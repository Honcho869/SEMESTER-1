int between(int *a, int *b)
{
  int x,sum;
  while(a<b){
    sum+=*a;
    a++;
  }
  return sum;
}
