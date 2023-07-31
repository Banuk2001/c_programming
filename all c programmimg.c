#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*printf("   *\n  ***\n *****\n*******\n");

    int age,byear;
    printf("Enter birth year:");
    scanf("%d",&byear);
    age=2023-byear;
    printf("your age is:%d",age);

    int no1,no2,total;
    printf("Enter first number:");
    scanf("%d",&no1);
    printf("Enter second number:");
    scanf("%d",&no2);
    total=no1+no2;
    printf("Total of numbers:%d",total);

    int no1,no2;
    float avg;
    printf("Enter first no:");
    scanf("%d",&no1);
    printf("Enter second no:");
    scanf("%d",&no2);
    avg=(float)(no1+no2/2.0);
    printf("avg of no:%.2f\n",avg);

    int no1,no2;
    float avg;
    printf("Enter first number:");
    scanf("%d",&no1);
    printf("Enter second number:");
    scanf("%d",&no2);
    avg=(float)(no1+no2)/2.0;
    printf("Average of numbers%.2f\n",avg);


    int byear,age;
    char name[20];
    printf("Enter your name:");
    scanf("%s",&name);
    printf("Enter birth year:");
    scanf("%d",&byear);
    age=2023-byear;
    printf("\nHey %s your are %d years old\n",name,age);*/


    int no1,no2,no3,max=0;
    printf("Enter three numbers:");
    scanf("%d %d %d",&no1,&no2,&no3);
    if(max<no1<no2<no3)
        max=no1,no2,no3;
           printf("\nThe height number is %d\n",max);


    /*int no;
    printf("Enter number:");
    scanf("%d",&no);
    if(no>0)
        printf("IT IS POSITIVE NUMBER\n");
    else if(no<0)
        printf("IT IS NEGETIVE NUMBER\n");
    else
        printf("IT IS ZERO\n");


    int m1,m2;
    printf("Enter module values:");
    scanf("%d%d",&m1,&m2);
    if(m1>50 && m2>50)
        printf("PASS");
    else
        printf("FAIL");


    int mon;
    printf("Enter mounth number:");
    scanf("%d",&mon);
    switch (mon)
    {
        case 1:printf("JANUARY");break;
        case 2:printf("FEBRUARY");break;
        case 3:printf("MARCH");break;
        case 4:printf("APRAIL");break;
        case 5:printf("MAY");break;
        case 6:printf("JUNE");break;
        case 7:printf("JULY");break;
        case 8:printf("AUGUST");break;
        case 9:printf("SEPTEMBER");break;
        case 10:printf("OCTOMBER");break;
        case 11:printf("NOVEMBER");break;
        case 12:printf("DECEMBER");break;
        default:printf("%d is invalid mounth number",mon);

    }


    char let;
    printf("Enter a letter:");
    scanf("%c",&let);
    switch (let)
    {
        case 'a':printf("IT IS VOWEL\n");break;
        case 'e':printf("IT IS VOWEL\n");break;
        case 'i':printf("IT IS VOWEL\n");break;
        case 'O':printf("IT IS VOWEL\n");break;
        case 'u':printf("IT IS VOWEL\n");break;
        default:printf("%c IS NOT A VOWEL\n",let);
    }


    int x=1;
    while(x<=100)
    {
        printf("%d",x);
        x++;

    }

    int x=10;
    while(x<=1000)
    {
        printf("\n%d\n",x);
        x=x+10;
    }

    int x=100;
    while(x>=2)
    {
        printf("\n%d\n",x);
        x=x-2;
    }

    int x=-2;
    while(x>=-100)
    {
        printf("%d",x);
        x=x-2;
    }

    int no,count,total;
    float avg;
    count=1;
    total=0;
    while(count<=10)
    {
        printf("Enter %d number: ",count);
        scanf("%d",&no);
        total=total+no;
        count++;
    }
    avg=(float)(total/10.0);
    printf("Average of numbers is %.2f\n",avg);


    int no,count,total;
    count=1;
    int p=0,n=0,z=0;
    while(count<=10)
    {
        printf("Enter %d number:",count);
        scanf("%d",&no);
        if (no>0)
            p=p+1;
            else if(no<0)
                n=n+1;
            else
                z=z+1;
            count++;
    }
    printf("Total count of +%d\n-%d\n0%d\n",p,n,z);


    int no,count;
    int even=0,odd=0;
    count=1;
    while(count<=10)
    {
        printf("Enter %d number:",count);
        scanf("%d",&no);
        count++;
        if(no%2==0)
            even++;
        else
            odd++;
    }
    printf("Total count of even number%d\n",even);
    printf("Total count of odd number%d\n",odd);

    int no,total,count=1,p=0,n=0,z=0;
    do{
        printf("ENTER %d NUMBER:",count);
        scanf("%d",&no);
        count++;
        if(no>0)
            printf("IT IS POSITIVE\n\n");
        else if(no<0)
            printf("IT IS NEGETIVE\n");
        else
            printf("IT IS ZERO\n");
    }
    while(count<10);

     int no,total,count=1,p=0,n=0,z=0;
    do{
        printf("ENTER %d NUMBER:",count);
        scanf("%d",&no);
        count++;
        if(no>0)
           p++;
        else if(no<0)
           n++;
        else
           z++;
    }
    while(count<=10);
    printf("NO OF POSITIVES=%d, NEGETIVES=%d, ZEROS=%d\n",p,n,z);


    //for loop//

    int x;
    for(x=1;x<=10;x++)
        printf("%d\n",x);


    int x;
    for(x=10;x<=1000;x=x+10)
        printf("%d\n",x);


    int x;
    for(x=100;x>=2;x=x-2)
        printf("%d\n",x);


    //ARRAY//

    float arr[10],sum=0,avg;
    int pro;
    for(pro=1;pro<=10;pro++)
    {
        printf("ENTER PRICE OF PRODUCT  %d:",pro);
        scanf("%f",&arr[pro]);
    }
    for(pro=1;pro<=10;pro++)
    {
        sum=sum+arr[pro];
        printf("price of the product %d is  %.2f\n",pro,arr[pro]);
    }
    avg=sum/10.0;
    printf("Average of products =%.2f\n",avg);


    int arr[3][4],r,c;
    for(r=0;r<3;r++)
    {
        for(c=0;c<4;c++)
        {
            printf("Enter a value of the arr[%d][%d]",r,c);
            scanf("%d",&arr[r][c]);
        }
    }
    for(r=0;r<3;r++)
    {
        for(c=0;c<4;c++)
        {
            printf("%d",arr[r][c]);
        }
        printf("\n");
    }


    int u[2][3],v[2][3],w[2][3],r,c;
    for(r=0;r<2;r++)
    {
        for(c=0;c<3;c++)
        {
            printf("Enter value of the u[%d][%d]",r,c);
            scanf("%d",&u[r][c]);
            printf("Enter value of the v[%d][%d]",r,c);
            scanf("%d",&v[r][c]);

        }
    }
    for(r=0;r<2;r++)
    {
        for(c=0;c<3;c++)
        {

            w[r][c]=u[r][c]+v[r][c];
            printf("%d",w[r][c]);
            printf("\n");
        }
    }


    float price[10],avg,min;
    int i,sum;
    for(i=1;i<=10;i++)
    {
        printf("Enter product price %d:",i);
        scanf("%f",&price[i]);
        sum=sum+price[i];

    }
    avg=sum/10.0;
    printf("\nAverage of product %.2f\n",avg);
    min=price[i];
    for(i=1;i<10;i++);
    {
        if(price[i]<min)
            min=price[i];
    }
    printf("The lowest price is %.2f\n",min);*/









    return 0;
}
