#include <stdio.h>
#include <cs50.h>

  //American Express: 15-digit numbers. Starts with 34 OR 37.
  //Mastercard: 16-digit numbers. Starts with 51 OR 52 OR 53 OR 54 OR 55.
  //Visa: 13-digit numbers OR 16-digit numbers. Starts with 4.

  //Luhn's Algorithm:
  // 1. Multiply every other digit by 2, starting with the number’s second-to-last digit, and then add those products’ digits together.
  // 2. Add the sum to the sum of the digits that weren’t multiplied by 2.
  // 3. If the total’s last digit is 0 (or, put more formally, if the total modulo 10 is congruent to 0), the number is valid.

int main(void)
{
  long cc; //credit card number.
  int sum1 = 0; //sum of alternate digits (from 1st to n-1)
  int sum2 = 0; //sum of alternate digits (from 2nd to n)
  int mod1;
  int mod2;
  int count = 0; //to count digits in credit card number.

  //Prompting user for credit card number.
  do{
      cc = get_long("Insert credit card number: ");
  } while(cc<0);

  long ccNumber = cc; //copy value of credit card number to test its company after Luhn's algorithm.

  //Luhn's Algorithm:
  while(cc>0){
      mod2 = cc%10;
      sum2 += mod2;
      cc = cc/10;
      mod1 = ((cc%10) * 2);
      while(mod1>9){
          sum1 += mod1%10;
          mod1 = mod1/10;
      }
      sum1 += (mod1%10);
      mod1 = mod1/10;
      cc = cc/10;
  }

  sum2 += sum1;

  //Credit Card Company Testing:
  while(ccNumber!=0){
      if(ccNumber>50 && ccNumber<56 && count == 14 && sum2%10==0) return printf("MASTERCARD\n");
      if(ccNumber==4 && (count==15 || count==12) && sum2%10==0) return printf("VISA\n");
      if((ccNumber==34 || ccNumber==37) && count==13 && sum2%10==0) return printf("AMEX\n");
      //"scrolling" and counting digits.
      ccNumber = ccNumber/10;
      count++;
  }
  return printf("INVALID\n");

}
