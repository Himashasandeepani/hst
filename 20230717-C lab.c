#include <stdio.h>
int main()
{
 int main()
{
    int u[3][3]=(3,2,4,1,4,6,4,3,2),v[3][3]=(2,6,3,4,3,2,5,1,7),sum[3][3],r,c;
    for(r=0;r<3;r++)
    {
        for(c=0;c<3;c++)
        {
            printf("u matrix: %d",u[r][c]);
         }
        printf("\t ");
     
        for(c=0;c<3;c++)
        {
            printf("v matrix: %d",v[r][c]);
         }
        printf("\t ");
    
 
        for(c=0;c<3;c++)
        {
            sum[r][c]=u[r][c]+v[r][c];
            printf("%d",sum[r][c]);
        }
        printf("\n");
    }
}