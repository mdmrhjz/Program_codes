#include<stdio.h>

int main()
{
    int i, j, n, temp, a[30];
    printf("\n\n\tSELECTION SORT\n");
    printf("Enter the no. of elements: ");
    scanf("%d", &n);

    printf("\nEnter the elements\n");
    for(i=0;i<n;i++)
        scanf("%d", &a[i]);

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    printf("\n---> OUTPUT\n");
    for(i=0;i<n;i++)
        printf("\t%d", a[i]);
    
    printf("\n");

}