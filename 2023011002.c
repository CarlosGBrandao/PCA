int permutacao(int a, int b) {
  int d;
  int perm; 

  printf("Digite dois inteiros: ");
  scanf("%d %d",&a,&b);
  perm = 1;

  for (d = 1; d <= 9; d++)
    if (contador(a,d) != contador(b,d))/* "contador" é a função ultilizada na primeira questão */
      perm = 0;

  if (perm == 1)
    printf("%d eh permutacao de %d\n",a,b);
  else
    printf("%d nao eh permutacao de %d\n",a,b);

  return 0;
}