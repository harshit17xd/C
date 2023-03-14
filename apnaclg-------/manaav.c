// // // // // // // /*#include<stdio.h>
// // // // // // // int main()
// // // // // // // {
// // // // // // //    int r,area;
// // // // // // //     printf("enter value of radius:");
// // // // // // //     scanf("%d",&r);
// // // // // // //    area= 3.14 * r * r;

// // // // // // //    printf("area= %d",area);

// // // // // // //    return 0;
// // // // // // // }
// // // // // // // */
// // // // // // //-------------------------------------------------------------------------------------------------
// // // // // // // #include<stdio.h>
// // // // // // // int main()
// // // // // // // {
// // // // // // //     int sec,min,s,hrs;
// // // // // // //     printf("enter numb");
// // // // // // //     scanf("%d",&sec);
// // // // // // //     hrs=sec/3600;
// // // // // // //     min=(sec-(3600*hrs))/60;

// // // // // // //     s=(sec-(hrs*3600)-(min*60));

// // // // // // //     printf("%d %d %d",hrs,min,s);


// // // // // // //     return 0;
// // // // // // // }
// // // // // // //------------------------------------------------------------------------------------------------
// // // // // // #include<stdio.h>
// // // // // // int main()
// // // // // // {
// // // // // //     int days,years,mnths,d;
// // // // // //     printf("enter days");
// // // // // //     scanf("%d",&days);

// // // // // //     years=days/365;
// // // // // //     mnths=(days-(years*365))/30;
// // // // // //     d=days-(years*365)-(mnths*30);

// // // // // //     printf("%d yrs %d months %d days",years,mnths,d);
    
// // // // // //     return 0;
// // // // // // }
// // // // // // ---------------------------------------------------------------------------------------------------


// // // // // #include<stdio.h>
// // // // // int main()
// // // // // {
// // // // //     int numb;
// // // // //     scanf("%d",&numb);

// // // // //     if(numb%2==0){
// // // // //         printf("even");
// // // // //     }
// // // // //     else{
// // // // //         printf("odd");
// // // // //     }
// // // // //     return 0;
// // // // // }

// // // // // //--------------------------------------------------------------------------------------------------

// // // // #include<stdio.h>
// // // // int main()
// // // // {
// // // //     int year;
// // // //     scanf("%d",&year);
    

// // // //     if(year%400==0)  {
// // // //         printf("leap year");
// // // //     }
// // // //     else if(year%100==0){
// // // //         printf("not leap");    
// // // //     }
// // // //     else if(year%4==0){
// // // //         printf("leap year");
// // // //     }
// // // //     else{
// // // //         printf("not leap year");
// // // //     }
// // // //     return 0;
// // // // }
// // // //-------------------------------------------------------------------------------------------------

// // // #include<stdio.h>
// // // int main()
// // // {   
// // //     int month;
// // //     printf("enter month");
// // //     scanf("%d",&month);

// // //     if (month==1){
// // //         printf("31 days");
// // //     }
// // //     else if (month==2){
// // //         printf("28 days");
// // //     }
// // //     else if (month==3){
// // //         printf("31days");
// // //     }
// // //     else if (month==4){
// // //         printf("30days");
// // //     }
// // //     else if(month==5){
// // //         printf("31 days");
// // //     }
// // //     else if(month==6){
// // //         printf("30 days");
// // //     }
// // //     else if(month==7){
// // //         printf("30 days");
// // //     }
// // //     else if(month==8){
// // //         printf("31 days");
// // //     }
// // //     else if(month==9){
// // //         printf("30 days");
// // //     }
// // //     else if(month==10){
// // //         printf("31 days");
// // //     }
// // //     else if(month==11){
// // //         printf("30 days");
// // //     }
// // //     else if(month==12){
// // //         printf("31 days");
// // //     }
// // //     else{printf("invalid month");}

// // //     return 0;
// // // }
// // // ----------------------------------------------------------------------------------------------

// // #include<stdio.h>
// // int main()
// // {   
// //     int month;
// //     printf("enter month");
// //     scanf("%d",&month);
// //     if(month==2){
// //         printf("28 days");
// //     }

// //     if (month==1 || month==3 || month==5|| month==8 ||month==10 ||month==12){
// //         printf("31 days");
// //     }
// //     else{
// //         printf("30 days");
// //     }
    

// //     return 0;
// // }
// // //--------------------------------------------------------------------------------------------

// #include<stdio.h>
// int main()
// {
//     int marks;
//     printf("enter marks");
//     scanf("%d", &marks);

//     if (marks>90 && marks<100){
//         printf("Grade A");
//     }
//     else if (marks>60 && marks<90){
//         printf("Grade B");
//     }
//     else{
//         printf("Grade C");
//     }
//     return 0;
// }

// #include<stdio.h>
// int main()
// {
//     int km,m;
//     scanf("%d",&km);
//     m=100*km;

//     printf("%d",m );
//     return 0;
// }
//------------------------------------------------------------------------------------------------------------------

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter character: ");
    scanf("%c",&ch);

    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z')){
        printf("Its a character");
    }
    else{
        printf("its not character");
    }

}