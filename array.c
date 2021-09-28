int main()
{

 int arr[3][2];
 int i,j;
 printf("Enter the elements of the array");
 for(i=0;i<3;i++)
 {
     for(j=0;j<2;j++)
     {

    scanf("%d",&arr[i][j]);

 }
 }
  //to print the array
 for(i=0;i<3;i++)
 {
     for(j=0;j<2;j++)
     {
     printf("%d",arr[i][j]);
     }
     if(j==2)
        printf("\n");
 }


   return 0;

}



