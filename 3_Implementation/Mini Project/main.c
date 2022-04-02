#include <stdio.h>
#include <string.h>
#include"unit.h"
//this calculator is applicable for 10 Indian State
//Every state ha s different method to calculate its own electricity bill
//This calculator will give Estimated bill
//Because Your entered power rating must be correct
//If your power rating is correct then that bill is 100 percent correct
/*float unit()
{
    float e, h1, rating, total1, m, unit_inkwh, x;
    float unit = 0;
    char equipment[25];
    //this is a function to calculate your total unit consumed
    printf("Enter no of equipment in  your home");
    scanf("%f", &e);
    for (int i = 1; i <= e; i++)
    {
        printf(" Enter the name of Equipment    :\n");
        scanf("%s", equipment);
        printf(" you have %s please enter its power rating\n", equipment);
        scanf("%f", &rating);
        printf(" How many hour you run %s \n", equipment);
        scanf("%f", &h1);
        total1 = rating * h1;
        unit = unit + total1;
    }
    unit_inkwh = (unit / 1000);
    printf("enter no of days in current month ");
    scanf("%f", &m);
    x = m * unit_inkwh;
    return x;
}*/
int main(){
    printf("This Electricity bill calculator is applicable for 10 Indian States\n");
printf("Enter the state where you live");
int state;
scanf("%d",&state);
printf("Fridge :-  100, 250, 200, 250, 550\nIron :  -800 to 2000 \nAC:-  900, 1200, 1500, 2000, 3500\n TV:-  17, 20 to 60, 130, 150, 295\nWashing Machine:-  500, 900\nPrinter:-  20 to 30, 600 to 800\nIncandescent Light:-  60 to 100\nLED Light:-   7 to 10\nFans:-  45 to 80 W\nComputer :-  200");
switch(state){
    case 1: 
    //this calculate for maharastra
     printf("YOUr state is Maharastra\n");
    float month_total_unit = unit();
    printf("The Estimated total unit is :%f\n", month_total_unit);
    float a, rate, final_01, final_bill;
    rate = 0.0;
    
  a=month_total_unit;
    if (a >= 0 && a <= 100)
    {
        rate = 3.44;
    }
    else if (a >= 101 && a <= 300)
    {
        rate = 7.34;
    }
    else if (a >= 301 && a <= 500)
    {
        rate = 10.36;
    }
    else if (a >= 501 && a <= 1000)
    {
        rate = 11.82;
    }
    else
    {
        rate = 11.82;
    }

    final_01 = 102.0 + rate * a + 1.38 * a;
    final_bill = final_01 + final_01 * 0.16;
    printf("\nYOUR FINAL ESTIMATED ELECTRICITY BILL IS(+,-5percent) :-%f ", final_bill);break;
    case 2:
    //This case calculate for madhya pradesh
 printf(" YOUr state is Madhya pradesh\n");
        float a1, place, rate1, final_011, final_bill1, fixed_charge;
    rate1 = 0.0;
    float month_total_unit1 = unit();
    printf("The Estimated total unit is :%f\n", month_total_unit1);
    a1=month_total_unit1;
    printf("Weather you are a Rural or Urban Consumer\n If you are a Rural Consumer than pree 2\nIf you are a Urban than press 1");
    scanf("%f", &place);
    fixed_charge = a1 / 15;
    if (place == 1)
    {
        if (a1 >= 0 && a1 <= 50)
        {
            rate1 = 4.05;
            final_bill1 = fixed_charge * 25 + rate1 * (a1 - 0) + 0.63 * (a1 - 0);
        }
        else if (a1 >= 51 && a1 <= 150)
        {
            rate1 = 4.95;
            final_bill1 = fixed_charge * 25 + 202.5 + rate1 * (a1 - 50) + 0.63 * (a1 );
        }
        else if (a1>= 151 && a1 <= 300)
        {
            rate1 = 6.3;
            final_bill1 = fixed_charge * 25 + 697.5 + rate1 * (a1 - 150) + 0.63 * (a1 );
        }
        else
        {
            rate1= 6.5;
            final_bill1 = fixed_charge * 25 + 1642.5 + rate1 * (a1 - 300) + 0.63 * (a1 );
        }
        printf("YOUR FINAL ESTIMATED ELECTRICITY BILL IS (+,-5percent):-%f ", final_bill1);
    }
    else
    {

        if (a1 >= 0 && a1 <= 50)
        {
            rate1 = 4.05;
            final_bill1 = fixed_charge * 23 + rate1 * (a1 - 0) + 0.63 * (a1 );
        }
        else if (a >= 51 && a <= 150)
        {
            rate = 4.95;
            final_bill1 = fixed_charge * 23 + 202.5 + rate1 * (a1 - 50) + 0.63 * (a1 );
        }
        else if (a >= 151 && a <= 300)
        {
            rate = 6.3;
            final_bill1 = fixed_charge * 23 + 697.5 + rate1 * (a1 - 150) + 0.63 * (a1 );
        }
        else
        {
            rate1 = 6.5;
            final_bill1 = fixed_charge * 23 + 1642.5 + rate1 * (a1 - 300) + 0.63 * (a1);
        }

        printf("YOUR FINAL ESTIMATED ELECTRICITY BILL IS (+,-5percent):-%f ", final_bill1);
    }break;

    case 3:
    //this case calculate for Chattisgarh
    printf(" Your state is Chattisgarh\n");
 float a2, rate2, final_bill2,duty,final2;
    rate2 = 0.0;
  a2=unit();
  printf("The Estimated total unit is :%f\n", a2);
   duty=a2*0.1;
    
        if (a2 >= 0 && a2 <= 100)
        {
            rate2 = 3.4;//Per unit is 1 rupee&fixed charge is 2.4 ruppee per unit
            final_bill2 = duty+ rate2 * (a2 - 0) ;
        }
        else if (a2 >=101 && a2 <= 200)
        {
            rate2 = 3.6;
            final_bill2 =duty+  340 + rate2 * (a2 - 100) ;
        }
        else if (a2 >= 201 && a2 <= 400)
        {
            rate2 = 4.9;
            final_bill2 =duty+ 700 + rate2 * (a2 - 200) ;
        }
        else if (a2 >= 401 && a2 <= 600)
        {
            rate2 = 5.5;
            final_bill2 = duty+ 1680 + rate2 * (a2 - 400) ;
        }
        else
        {
            rate2 = 7.3;
            final_bill2 = duty+ 2780 + rate2 * (a2 - 600) ;
        }
        final2=final_bill2+final_bill2*0.07;
        printf("YOUR FINAL ESTIMATED ELECTRICITY BILL IS(+,-5percent) :-%f ", final2);
        break;
        case 4:
//This case calculate for Gujrat
        printf(" Your entered state is gujrat\n");
         float a3, rate3, final_bill3,final3,total3,fixc3;
    rate3 = 0.0;
    fixc3=0.0;
   a3=unit();
   printf("The Estimated total unit is :%f\n", a3);
    printf("Your total connected load");
    scanf("%f",&total3);
    if(total3>=0&&total3<=2){
fixc3=15;
    }else if(total3>2&&total3<=4){
        fixc3=25;
    }else if(total3>4&&total3<=6){
        fixc3=45;
    }else {
        fixc3=70;
    }
        if (a3 >= 0 && a3 <= 50)
        {
            rate3 = 2.65;//Per unit is 1 rupee&fixed charge is 2.4 ruppee per unit
            final_bill3 =  rate3 * (a3 - 0)+fixc3 ;
        }
        else if (a3 >=51 && a3 <= 100)
        {
            rate3 = 3.1;
            final_bill3 =  132.5+rate3 * (a3 - 50)+fixc3 ;
             
        }
        else if (a3 >= 101 && a3 <= 250)
        {
            rate3 = 3.75;
            final_bill3 = 287.5 + rate3 * (a3 - 100)+fixc3 ;
        }
        
        else
        {
            rate3 = 4.9;
            final_bill3 =  850 + rate3 * (a3 - 250)+fixc3 ;
        }
        final3=final_bill3+final_bill3*0.075;
        printf("YOUR FINAL ESTIMATED ELECTRICITY BILL IS (+,-5percent):-%f ", final3);break;
        case 5:
        //This case is for uttarpradesh
        printf("Your state is Uttarpradesh\n");
        float a4, rate4, final_bill4,tax4,final4;
    rate4 = 0.0;
    tax4=110;
           a4=unit();
  printf("The Estimated total unit is :%f\n", a4);
 
        if (a4 >= 0 && a4 <= 150)
        {
            rate4 = 5.5;//Per unit is 1 rupee&fixed charge is 2.4 ruppee per unit
            final_bill4 =  rate4 * (a4 - 0)+tax4 ;
        }
        else if (a4 >=151 && a4 <= 300)
        {
            rate4 = 6;
            final_bill4 =  825+rate4 * (a4 - 150)+tax4 ;
             
        }
        else if (a4 >= 301 && a4 <= 500)
        {
            rate4 = 6.5;
            final_bill4 = 1725 + rate4 * (a4 - 300)+tax4 ;
        }
        
        else
        {
            rate4 = 7;
            final_bill4 =  3025 + rate4 * (a4 - 500)+tax4 ;
        }
      final4=final_bill4+final_bill4*0.05;
        printf("YOUR FINAL ESTIMATED ELECTRICITY BILL IS (+,-5percent):-%f ", final4);
        break;
        case 6:
        //this case is for karnataka
        printf("Your entered state is Karnataka\n");
          
    float a5, rate5, final_bill5,tax5,final5;
    rate5 = 0.0;
    tax5=60;
   a5=unit();
  printf("The Estimated total unit is :%f\n", a5);
 
        if (a5 >= 0 && a5 <= 30)
        {
            rate5 = 3.75;//Per unit is 1 rupee&fixed charge is 2.4 ruppee per unit
            final_bill5 =  rate5 * (a5 - 0)+tax5 ;
        }
        else if (a5 >=31 && a5 <= 100)
        {
            rate5 = 5.2;
            final_bill5 =  112.5+rate5 * (a5 - 30)+tax5 ;
             
        }
        else if (a5 >= 101 && a5 <= 200)
        {
            rate5 = 6.75;
            final_bill5 = 476.5 + rate5 * (a5 - 100)+tax5 ;
        }
        
        else
        {
            rate5 = 7.8;
            final_bill5 =  1151.5 + rate5 * (a5 - 200)+tax5 ;
        }
      final5=final_bill5+final_bill5*0.05;
        printf("YOUR FINAL ESTIMATED ELECTRICITY BILL IS (+,-5percent):-%f ", final5);
break;
case 7:
//This case is for telangana
printf(" your entered state is telangana\n");
  float a6, bill6;
a6=unit();
   printf("The Estimated total unit is :%f\n", a6);
    if (a6<=100)
    {
        if (a6 >= 0 && a6 <= 50)
        {
            bill6 = a6 * 1.51 + 25;
        }
        else
        {
            bill6 = (a6-50) * 2.66 +75.5+ 30;
        }
    }
    else if (a6<=200)
    {
        if (a6 >= 0 && a6 <= 100)
        {
            bill6 = a6 * 3.36 + 25;
        }
        else
        {
            bill6 = (a6-100) * 4.36 +336+ 50;
        }
    }
    else
    {printf("If you have done some malpractices then your bill will be more");
        if (a6 >= 0 &&a6 <= 200)
        {
            bill6 = a6 * 5.06 + 50;
        }
        else if (a6 >= 201 && a6 <= 300)
        {
            bill6 = (a6-200) * 7.26 +1012+ 60;
        }
        else if (a6 >= 301 && a6 <= 400)
        {
            bill6 = (a6-300) * 8.56 +1738+ 80;
        }
        else if (a6 >= 401 && a6 <= 800)
        {
            bill6 = (a6-400) * 9.06 +2594+ 80;
        }
        else
        {
            bill6 = (a6-800) * 9.56 +6218+ 80;
        }
    }
        printf("YOUR ELECTRICITY BILL IS (+,-5percent)%f", bill6);
        break;

        case 8:
//This case is for Taamilnadu
        printf("your entered state is tamilnadu\n");
        float a7, bill7,duty7;
    a7=unit();
    printf("The Estimated total unit is :%f\n", a7);
    duty7=a7/10;
    if (a7<=100)
    {
          bill7 = a7 *0;
    }
    else if (a7<=200)
    {
         bill7 = (a7-100)* 1.5 + 20+duty7;
    }
    else if(a7<=500)
    {
        if (a7 >= 0 && a7 <= 200)
        {
            bill7 = (a7-100) * 2 + 30+duty7;
        }
        else
        {
            bill7 = (a7-200) * 3 + 30+200+duty7;
        }
    }
    else{
         if (a7 >= 0 && a7 <= 200)
        {
            bill7 = (a7-100) * 3.5 + 50+duty7;
        }
        else if(a7>=201&&a7<=500)
        {
            bill7 = (a7-200) * 4.6 + 50+350+duty7;
        }
        else{
            bill7=(a7-500)*6.6+50+1730+duty7;
        }
    }
    printf("YOUR ELECTRICITY BILL IS(+,-5percent)%f", bill7);
    break;
    case 9:
    //This case is for Andhra pradesh
    printf("your entered state is andhra pradesh\n");
    float a8, bill8;
   a8=unit();
   printf("The Estimated total unit is :%f\n", a8);
    if (a8<=75)
    {
        if(a8>=0&&a8<=50){
          bill8 = a8 *1.45;
        }
        else{
              bill8 = (a8-50) *2.6+72.5;
        }
    }
    else if (a8<=225)
    {
         if(a8>=0&&a8<=50){
             bill8=a8*2.6;
         }else if(a8>=51&&a8<=100){
              bill8=(a8-50)*2.6+130;
         }else if(a8>=101&&a8<=200){
               bill8=(a8-100)*3.6+260;
         }else{
             bill8=(a8-200)*6.9+620;
         }
    }
    else{
         if (a8 >= 0 && a8 <= 50)
        {
            bill8 = a8*2.65;
        }
        else if(a8>=51&&a8<=100)
        {
            bill8 = (a8-50) * 3.35 +132.5;
        }
         else if(a8>=101&&a8<=200)
        {
            bill8 = (a8-100) * 5.4 +300;
        }else if(a8>=201&&a8<=300)
        {
            bill8 = (a8-200) * 7.1 +840;
        }
        else if(a8>=301&&a8<=400)
        {
            bill8 = (a8-300) * 7.95 +1550;
        }else if(a8>=401&&a8<=500)
        {
            bill8 = (a8-400) * 8.5 +2345;
        }
        else{
            bill8=(a8-500)*9.95+3195;
        }
    }
    printf("YOUR ELECTRICITY BILL IS(+,-5percent) %f", bill8);
    break;
    case 10:
    //This case is for West bengal
    printf(" your state is west-bengal\n");
    float a9,bill9;
   a9=unit();
   printf("The Estimated total unit is :%f\n", a9);
    if(a9>=0&&a9<=102){
bill9=a9*5.37+15;
    }else if(a9>=103&&a9<=180){
        bill9=(a9-102)*5.97+15+547.74;
    }else if(a9>=181&&a9<=300){
        bill9=(a9-180)*6.97+15+1013.4;
    }else if(a9>=301&&a9<=600){
        bill9=(a9-300)*7.31+15+1849.8;
    }else if(a9>=601&&a9<=900){
        bill9=(a9-600)*7.58+15+4042.8;
    }else{
 bill9=(a9-900)*8.99+15+6316.11;
    }
    printf("Your Electricity bill is (+,-5percent)  :-%f",bill9);
}

    return 0;
}
