#include<iostream>
#include<conio.h>
#include<string.h>
void main()
{
    char sent[100];
    int check=0,w=0,s=0,l=0,i=0,j=0,n=0,c[10];
    cout<<"Enter a Sentence\n";
    gets(sent);
    l=strlen(sent);
    for(i=n; i<l; i++)
    {
        w+=sent[i];               //w is int so it stores the sum of the char
        if(sent[i]==' ')
        {
            c[j]=w-32;            //32 because space is added
            w=0;
            n=i;                  //for loop to run again
            j++;
            s++;
        }
    }
    c[j]=w;                       //beacuse the last if is not executed
    for(i=0; i<=s-1; i++)
    {
        if(c[i]>c[i+1])
        {
            check=1;              //checking for was
        }
    }
    if(check==1)
    {
        cout<<"NOPE  THIS IS NOT A WAS\n";
    }
    else
    {
        cout<<"WAS\n";
    }
}
