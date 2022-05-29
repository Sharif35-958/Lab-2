/*5. If the ages of Arif, Fahmid and Joy are input through the keyboard,
write a program to determine the youngest of the three.*/

#include<stdio.h>
int main()
{
    int Arif,Joy,Fahmid;
    printf("Enter the age of Arif:");
    scanf("%d",&Arif);
    printf("Enter the age of Joy:");
    scanf("%d",&Joy);
    printf("Enter the age of Fahmid:");
    scanf("%d",&Fahmid);
    if(Arif<Joy && Arif<Fahmid)
        {
        printf("Arif is younger");
    }
    else if(Joy<Arif && Joy<Fahmid)
    {
        printf("Joy is younger");
    }
    else{
        printf("Fahmid is younger");

    }
    return 0;
}
