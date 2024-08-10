/*12345
   1234
    123
     12
      1*/
int main()
{
    int i,j,k;
    for(i=5;i>=1;i--)
    {
        for(j=5;j>=i;j--)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("%d",k);
        }
        printf("\n");
    }
    return 0;
}
