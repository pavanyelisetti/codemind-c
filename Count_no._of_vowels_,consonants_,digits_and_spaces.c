#include<stdio.h>
int main()
{
    char a[100];
    int c=0,i,v=0,co=0,d=0,w=0;
    
    scanf("%[^
]s",a);
    for(i=0;a[i]!=NULL;i++)
    {
        c++;
    }
    for(i=0;a[i]!=NULL;i++)
    {
        if(a[i]>=65&&a[i]<=90)
        {
            if(a[i]==65||a[i]==69||a[i]==73||a[i]==79||a[i]==85)
            {
                v++;
            }
            else
            {
                co++;
            }
        }
        else if(a[i]>=97&&a[i]<=122)
        {
            if(a[i]==97||a[i]==101||a[i]==105||a[i]==111||a[i]==117)
            {
                v++;
            }
            else
            {
                co++;
            }
        }
        else if(a[i]>=48&&a[i]<=57)
        {
            d++;
        }
        else 
        {
        	if(a[i]==32)
            w++;
        }
    }
    printf("Vowels: %d
Consonants: %d
Digits: %d
White spaces: %d
",v,co,d,w);
}