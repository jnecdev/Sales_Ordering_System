//Jolibee Program
//Jonathan Castillo. University of Santo Tomas. 2010.

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int food[10];
int x=0;
int main()
{ 
char ans1='Y',ans2='Y';
int order,qty, custloop = 1, dayloop = 1, orderloop = 1;
float totalday=0.00, totalcust=0.00, money=0.00, change=0.00;

while(dayloop == 1)
{
system("CLS");
printf("\t\t\tGood Day Ma'am/Sir, Welcome to Jollibee!\n");

totalcust = 0.00;
custloop = 1;
orderloop = 1;
while(custloop == 1)
{

printf("\n");
printf(" MENU\n\n");
printf("*Chicken Meals (w/ reg. softfrink)\n\n");
printf("A1. Chickenjoy w/ rice(Orig/Spicy)\n");
printf("1-pc.:");
printf("Solo P 71.00 Value Meal P 87.00\n");
printf("2-pc.:");
printf("Solo P 116.00 Value Meal P 132.00\n\n");
printf("A2. Chicken Bbq or Spicy Chicken Bbq w/ rice\n");
printf("1-pc.:");
printf("Solo P 71.00 Value Meal P 87.00\n");
printf("2-pc.:");
printf("Solo P 116.00 Value Meal P 132.00\n\n");
printf("A3. 1-pc Chickenjoy or Chicken Bbq w/ Spaghetti");
printf("P 105.00\n\n");
printf("A4. 1-pc Chicken Bbq or Chickenjoy & Palabok");
printf("P 120.00\n\n");
system("PAUSE");
printf("\nRice Meals & Noodle Value Meals(w/ reg. softdrink\n\n");
printf("R1. Burger Steak w/ rice\n");
printf("1-pc.:");
printf("Solo P 40.00 Value Meal P 56.00\n");
printf("2-pc.:");
printf("Solo P 63.00 Value Meal P 79.00\n\n");
printf("R2. Jollibee Crispy Bangus\n");
printf("1-pc.:");
printf("Solo P 62.00 Value Meal P 72.00");
printf("2-pc.:");
printf("Solo P 99.00 Value Meal P 109.00\n\n");
printf("R3. Beef with mushrooms(w/ reg. softdrink) : ");
printf("Solo P 39.00 Value Meal P 55.00\n\n");
printf("R4. 5-pcs. Shanghai Rolls : ");
printf("Solo P 39.00 Value Meal P 55.00\n\n");
printf("R5. Sweet and Sour Meatballs :");
printf("Solo P 39.00 Value Meal P 55.00\n\n");
printf("R6. Jollibee Spaghetti : ");
printf("Solo P 43.00 Value Meal P 57.00\n\n");
printf("R7. Jollibee Spaghetti w/ Yum : ");
printf("P 87.00\n\n");
printf("R8. Palabok Fiesta : ");
printf("Solo 57.00 Value Meal P 73.00\n\n");
system("PAUSE");
printf("\nBurgers and Hotdog Value Meals\n\n");
printf("B1. Yum,Reg. fries & Reg. softdrink : ");
printf("Solo P 28.00 Value Meal P 60.00\n");
printf("B2. Yum w/ cheese,Reg fries & Reg. softdrink : ");
printf("Solo P 43.00 Value Meal P 75.00\n\n");
printf("B3. Yum w/ TLC,Reg fries & Reg. softdrink : ");
printf("Solo P 51.00 Value Meal P 83.00\n\n");
printf("B4. Champ,Reg. fries & Reg. softdrink : ");
printf("Solo P 98.00 Value Meal P 130.00\n\n");
printf("B5. Jolly Hotdog Classic : ");
printf("Solo P 43.00 W/ drinks P 55.00 Value Meal P 75.00\n\n");
printf("B6. Jolly Hotdog Regular : ");
printf("Solo P 25.00 W/ drinks P 37.00 Value Meal P 57.00\n\n");
system("PAUSE");
printf("\nDesserts\n\n");
printf("D1. Peach Mango Pie : ");
printf("P 22.00\n");
printf("D2. Swirly Bitz(Cookies&Cream) : ");
printf("P 29.00\n");
printf("D3. Chocolate Sundae : ");
printf("P 29.00\n\n");
printf("D4. Choco Crumble Sundae : ");
printf("P 36.00\n\n");
printf("D5. Jolly Krunchy Twirl : ");
printf("Vanilla P 10.00 Chocolate P 15.00\n");
printf("D6. Coke Float : ");
printf("P 25.00\n");
printf("D7. Watermelon Sprite Float : ");
printf("P 28.00\n\n");
printf("D8. Rocky Road Brownie Sundae : ");
printf("P 36.00\n\n");
printf("Side Items\n\n");
printf("S1. Jolly Crispy Fries : ");
system("PAUSE");
printf("\nRegular P 28.00 Large P 45.00 Extra-large P 57.00\n\n");
printf("S2. Creamy Macaroni Soup : ");
printf("Solo P 31.00 Big Bowl P 54.00\n");
printf("Bucket Meals\n");
printf("M1. 6-pc. Bucket Meal\n");
printf("(3-pcs. Chickenjoy + 3-pcs. Chicken Bbq) : ");
printf("P 330.00\n\n");
printf("M2. 12-pc. Bucket Meal\n");
printf("6-pcs. Chickenjoy + 6-pcs. Chicken Bbq : ");
printf("P 654.00\n\n");
printf("Jollibee Kids Meal\n");
printf("K1. Yumburger Meal + toy : ");
printf("P 78.00\n");
printf("K2. 1-pc. Burger Steak Meal + toy : ");
printf("P 84.00\n\n");
printf("K3. Spaghetti Meal + toy : ");
printf("P 85.00\n\n");
printf("K4. 1-pc. Chickenjoy Meal + toy :");
printf("P 102.00\n\n");
system("PAUSE");
printf(" 1. A1SOLO1pc	 23. R5SOLO	 47. D5Vanilla\n");
printf(" 2. A1Value1pc	 24. R5Value	 48. D5Choco\n");
printf(" 3. A1SOLO2pc	 25. R6SOLO	 49. D6\n");
printf(" 4. A1Value2pc	 26. R6Value	 50. D7\n");
printf(" 5. A2SOLO1pc	 27. R7SOLO	 51. D8\n");
printf(" 6. A2Value1pc	 28. R7Value	 52. S1Regular\n");
printf(" 7. A2SOLO2pc	 29. R8SOLO	 53. S1Large\n");
printf(" 8. A2Value2pc	 30. R8Value	 54. S1Extra\n");
printf(" 9. A3	 31. B1SOLO	 55. S2Solo\n");
printf(" 10. A4	 32. B1Value	 56. S2Bowl\n");
printf(" 11. R1SOLO1pc	 33. B2Solo	 57. M1\n");
printf(" 12. R1Value1pc	 34. B2Value	 58. M2\n");
printf(" 13. R1SOLO2pc	 35. B3Solo	 59. K1\n");
printf(" 14. R1Value2pc	 36. B3Value	 60. K2\n");
printf(" 15. R2SOLO1pc	 37. B4Solo	 61. K3\n");
printf(" 16. R2Value1pc	 38. B4Value	 62. K4\n");
printf(" 17. R2SOLO2pc	 39. B5Solo\n");
printf(" 18. R2Value2pc	 40. B5Value\n");
printf(" 19. R3SOLO	 41. B6Solo\n");
printf(" 20. R3Value	 42. B6Value\n");
printf(" 21. R4SOLO	 43. D1\n");
printf(" 22. R4Value	 44. D2\n");
printf(" 23. R5SOLO	 45. D3\n");
printf(" 24. R5Value	 46. D4\n\n");
if(orderloop == 1)
{
printf("\nEnter Order code (1-62) : ") ; 
scanf("%d",&order);
if(order>=1 && order<=62)
{printf("\nHow Many : "); 
scanf("%d",&qty);}

if(order<1 || order>62)
printf("Invalid selection");

switch(order)
{
case 1: totalcust = totalcust + qty*71.00;
break;
case 2: totalcust = totalcust + qty*87.00;
break;
case 3: totalcust = totalcust + qty*116.00;
break;
case 4: totalcust = totalcust + qty*132.00;
break;
case 5: totalcust = totalcust + qty*71.00;
break;
case 6: totalcust = totalcust + qty*87.00;
break;
case 7: totalcust = totalcust + qty*116.00;
break;
case 8: totalcust = totalcust + qty*132.00;
break;
case 9: totalcust = totalcust + qty*105.00;
break;
case 10: totalcust = totalcust + qty*120.00;
break;
case 11: totalcust = totalcust + qty*40.00;
break;
case 12: totalcust = totalcust + qty*56.00;
break;
case 13: totalcust = totalcust + qty*63.00;
break;
case 14: totalcust = totalcust + qty*79.00;
break;
case 15: totalcust = totalcust + qty*62.00;
break;
case 16: totalcust = totalcust + qty*72.00;
break;
case 17: totalcust = totalcust + qty*99.00;
break;
case 18: totalcust = totalcust + qty*109.00;
break;
case 19: totalcust = totalcust + qty*39.00;
break;
case 20: totalcust = totalcust + qty*55.00;
break;
case 21: totalcust = totalcust + qty*39.00;
break;
case 22: totalcust = totalcust + qty*55.00;
break;
case 23: totalcust = totalcust + qty*39.00;
break;
case 24: totalcust = totalcust + qty*55.00;
break;
case 25: totalcust = totalcust + qty*43.00;
break;
case 26: totalcust = totalcust + qty*57.00;
break;
case 27: totalcust = totalcust + qty*87.00;
break;
case 28: totalcust = totalcust + qty*57.00;
break;
case 29: totalcust = totalcust + qty*73.00;
break;
case 30: totalcust = totalcust + qty*28.00;
break;
case 31: totalcust = totalcust + qty*60.00;
break;
case 32: totalcust = totalcust + qty*43.00;
break;
case 33: totalcust = totalcust + qty*75.00;
break;
case 34: totalcust = totalcust + qty*51.00;
break;
case 35: totalcust = totalcust + qty*83.00;
break;
case 36: totalcust = totalcust + qty*98.00;
break;
case 37: totalcust = totalcust + qty*130.00;
break;
case 38: totalcust = totalcust + qty*43.00;
break;
case 39: totalcust = totalcust + qty*55.00;
break;
case 40: totalcust = totalcust + qty*75.00;
break;
case 41: totalcust = totalcust + qty*25.00;
break;
case 42: totalcust = totalcust + qty*57.00;
break;
case 43: totalcust = totalcust + qty*22.00;
break;
case 44: totalcust = totalcust + qty*22.00;
break;
case 45: totalcust = totalcust + qty*29.00;
break;
case 46: totalcust = totalcust + qty*36.00;
break;
case 47: totalcust = totalcust + qty*10.00;
break;
case 48: totalcust = totalcust + qty*15.00;
break;
case 49: totalcust = totalcust + qty*25.00;
break;
case 50: totalcust = totalcust + qty*28.00;
break;
case 51: totalcust = totalcust + qty*36.00;
break;
case 52: totalcust = totalcust + qty*28.00;
break;
case 53: totalcust = totalcust + qty*45.00;
break;
case 54: totalcust = totalcust + qty*57.00;
break;
case 55: totalcust = totalcust + qty*31.00;
break;
case 56: totalcust = totalcust + qty*54.00;
break;
case 57: totalcust = totalcust + qty*330.00;
break;
case 58: totalcust = totalcust + qty*654.00;
break;
case 59: totalcust = totalcust + qty*78.00;
break;
case 60: totalcust = totalcust + qty*84.00;
break;
case 61: totalcust = totalcust + qty*85.00;
break;
case 62: totalcust = totalcust + qty*102.00;
break;
}
printf("\nMore order for this customer (Y/N)");
ans1 = getch();
if(ans1 == 'N' || ans1 == 'n')
{
printf("\nCustomer total order is %f\n\n",totalcust);
system("PAUSE");


printf("\nHow much money the customer give ? ");
scanf("%f", &money);

if(money>totalcust)
printf("\nThe change is %f\n\n",money-totalcust);
while(money<totalcust)
{printf("\nInsufficient payment!\n");
printf("\nHow much money the customer give? ");
scanf("%f", &money);
continue;}
printf("\nThe change is %f\n\n",money-totalcust);



custloop = 0;
orderloop = 0;
totalday = totalday + totalcust;
}
}
}
printf("Do you want to continue using the order system (Y/N): ");
ans2 = getch();
printf("\n\n");
system("PAUSE");
if(ans2 == 'N' || ans2 == 'n')
{
printf("\n\nDay total sales is = %f\n\n",totalday);
system("PAUSE");
dayloop = 0;
}

}
return 0;
}
