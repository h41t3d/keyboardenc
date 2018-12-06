// encryption is only usable only once.
// #include<iostream.h>
#include<stdio.h>
// #include<conio.h>
int main()
{
        int array[50];
        int encrypted[50];
        int size;
        printf("\nenter size of array number-->");
        scanf("%d",&size);
        printf("\nenter a number as an array to be encrypted-->\n");
        for(int i=0;i<size;i++)
        {
            scanf("%d",&array[i]);
        }
        printf("\nentered number which is going to be encrypted is\n");
        for(int j=0;j<size;j++)
        {
            printf("%d",array[j]);
        }
        printf("\nencrypting.......\n");
        for(int k=0;k<size;k++)
        {
            if(array[k]==0)
            {
                    encrypted[k]=41;
            }
            else if(array[k]==1)
            {
                    encrypted[k]=33;
            }
            else if(array[k]==2)
            {
                    encrypted[k]=64;
            }
            else if(array[k]==3)
            {
                    encrypted[k]=35;
            }
            else if(array[k]==4)
            {
                    encrypted[k]=36;
            }
            else if(array[k]==5)
            {
                    encrypted[k]=37;
            }
            else if(array[k]==6)
            {
                    encrypted[k]=94;
            }
            else if(array[k]==7)
            {
                    encrypted[k]=38;
            }
            else if(array[k]==8)
            {
                    encrypted[k]=42;
            }
            else if(array[k]==9)
            {
                    encrypted[k]=40 ;
            }
        }
        printf("\nencryption finished\n");
        printf("\nencrypted integer is-->\n");
        for(int g=0;g<size;g++)
        {
            printf("%d",encrypted[g]);
        }
        return 0;
}
