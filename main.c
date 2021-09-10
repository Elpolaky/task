#include <stdio.h>
#include <stdlib.h>


int getDegree();
int getAverag (int);
void getGrade(int);


int main()
{
    int total = 0,average=0;

    for(int i =0 ; i<5 ; i++)
    {

        total+= getDegree();

    }
    average = getAverag(total);

    getGrade(average);

    return 0;
}



int getDegree()
{
    int degree ;
    printf("Please Enter your degree \n");
    scanf("%d",&degree);
    return degree ;
}


int getAverag(int total)
{
    return total/5 ;

}

void getGrade(int average)
{

    if(100>= average && average>=85)
    {
        printf("Excellent \n");
    }
    else if (75 <=average&& average<85)
    {
        printf("very Good");
    }
    else if (65 <=average&& average<75)
    {
        printf("Good");
    }
    else if (0 <=average&& average<55)
    {
        printf("Failed");
    }

}









//void cal ()
//{
//    float x,y ;
//
//    printf("Enter the first num \n");
//    scanf("%f",&x);
//
//    printf("Enter the second num \n");
//    scanf("%f",&y);
//
//    printf("sum = %.f \n",x+y);
//
//    printf("sub = %.f \n",x-y);
//
//    printf("multi = %.f \n",x*y);
//
//    printf("div = %.1f",x/y);
//
//
//
//}
