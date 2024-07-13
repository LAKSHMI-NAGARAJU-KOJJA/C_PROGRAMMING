// Question:1 Write a loop program to print 1 to 5 on one by one. 
// Answer: 1 
// 2 
// 3 
// 4
// 5
#include <stdio.h>
int main(){
    int i=1;
    loop:
    if(i<=5){
        printf("%d\n",i);
        i++;
        goto loop;
    }
    return 0;
}
// ======================================================================================
// Question:2 Write a loop program to print 5 to 1 on one by one. 
// Answer: 5 
// 4 
// 3 
// 2 
// 1
#include <stdio.h>
int main(){
    int i=5;
    loop:
    if(i>=1){
        printf("%d\n",i);
        i--;
        goto loop;
    }
    return 0;
}
// ======================================================================================
// Question:3 Write a loop program to print sum of 1 to 5. 
// Answer: 15
#include <stdio.h>
int main(){
    int i=0,sum=0;
    loop:
    if(i<=5){
        sum = sum+i;
        i++;
        goto loop;
    }
    printf("%d",sum);
    return 0;
}
// ======================================================================================
// Question:4 Write a loop program to print sum of 6 to 1. 
// Answer: 21
#include <stdio.h>
int main(){
    int i=6,sum=0;
    loop:
    if(i>=1){
        sum=sum+i;
        i--;
        goto loop;
    }
    printf("%d",sum);
    return 0;
}
// ======================================================================================
// Question:5 Write a loop program to print odd numbers 1 to 9. 
// Answer: 1 
// 3 
// 5 
// 7 
// 9
#include <stdio.h>
int main(){
   int i=1;
   loop:
   if(i<=9){
    if((i%2)!=0){
        printf("%d\n",i);
    }
    i++;
    goto loop;
   }
    return 0;
}
// ======================================================================================
// Question:6 Write a loop program to print the two-digit odd numbers, below 20. 
// Answer: 11 
// 13 
// 15 
// 17 
// 19
#include <stdio.h>
int main(){
    int i=10;
    loop:
    if(i<=20){
        if((i%2)!=0){
            printf("%d\n",i);
        }
        i++;
        goto loop;
    }
    return 0;
}
// ======================================================================================
// Question:7 Write a loop program to print the two-digit odd numbers, who’s sum of 
// digits are 7. 
// Answer: 25 
// 43 
// 61
#include <stdio.h>
int main(){
    int i=10;
    loop:
    if(i<=99){
        if((i%2)!=0){
            if(((i%10)+(i/10))==7){
                printf("%d\n",i);
            }
        }
        i++;
        goto loop;
    }
    return 0;
}
// ======================================================================================
// Question:8 Write a loop program to print the two-digit even numbers, who’s sum of 
// digits are 6. 
// Answer: 24 
// 42 
// 60
#include <stdio.h>
int main(){
    int i=10;
    loop:
    if(i<=99){
        if(i%2==0){
            if(((i%10)+(i/10))==6){
                printf("%d\n",i);
            }
        }
        i++;
        goto loop;
    }
    return 0;
}
// ======================================================================================
// Question:9 Write a loop program to print the sum of two-digit numbers whose  
// one’s digit is 5. 
// Answer: 495
#include <stdio.h>
int main(){
    int i=10,sum=0;
    loop:
    if(i<=99){
        if((i%10)==5){
            sum=sum+i;
        }
        i++;
        goto loop;
    }
    printf("%d",sum);
    return 0;
}
// =====================================================================================
// Question:10 Write a loop program to print the sum of two-digit odd numbers, whose 
// ten’s digit is 7. 
// Answer: 375
#include <stdio.h>
int main(){
    int i=10,sum=0;
    loop:
    if((i<=99)){
        if(((i%2!=0)&&(i/10==7))){
            sum=sum+i;
        }
               i++;
        goto loop;
    }
    printf("%d",sum);
    return 0;
}
// ======================================================================================
// Question 11: Write a program to get a number from user and print the sum of all digits.
// Answer: Input: 123456 - Output – 21
// Input: 76895439 - Output – 51
// Input: 675 – Output - 18
#include <stdio.h>
int main(){
    long long int num,sum=0;
    printf("enter the num:");
    scanf("%lld",&num);
    loop:
    if(num!=0){
        sum=sum+(num%10);
        num=num/10;
        goto loop;
    }
    printf("%lld",sum);
    return 0;
}
// ======================================================================================
// Question 12: Write a program to get a number from user and print the reverse of that number
// Answer: Input : 123456 - Output – 654321
// Input : 76895439- Output – 93459867
// Input : 675 – Output - 576
#include <stdio.h>
int main(){
    long long int num,rim=0,rev=0;
    printf("enter the num:");
    scanf("%lld",&num);
    loop:
    if(num!=0){
        rim=num%10;
        rev=rev*10+rim;
        num=num/10;
        goto loop;
    }
    printf("%lld",rev);
    return 0;
}
// ======================================================================================
// ======================================================================================
// Question 13: Write a program to get a number from user and print the reverse of that number
// Answer: Input : 123456 - Output – 654321
// Input : 76895439- Output – 93459867
// Input : 675 – Output - 576
#include <stdio.h>
int main(){
    int num,rim,rev=0;
    printf("enter the num:");
    scanf("%d",&num);
    loop:
    if(num>0){
        rim=num%10;
        rev=rev*10+rim;
        num=num/10;
        goto loop;
    }
    printf("%d",rev);
    return 0;
    }
// ======================================================================================
// Question 14: Write a program to get a number from user and interchange the first and last digits and print the result.
// Answer: Input : 123456 - Output – 623451
// Input : 76895439- Output – 96895437
// Input : 675 – Output - 576
#include <stdio.h>
int main(){
    int num,lastdigit,modifiednum,rim,rev=0,rim2,rev2=0,interchanged;
    printf("enter the num:");
    scanf("%d",&num);
    lastdigit = num%10;
    modifiednum=num/10;
    loop:
    if(num>9){
        num=num/10;  
        goto loop; 
    }
    // printf("%d",lastdigit);
    loop2:
    if(modifiednum>9){
        rim2=modifiednum%10;
        rev2=rev2*10+rim2;
        modifiednum=modifiednum/10;
        goto loop2;
    }
    int modifiednum2=rev2,rim3,rev3=lastdigit;
    // printf("%d",rev2);
    loop3:
    if(modifiednum2>0){
        rim3=modifiednum2%10;
        rev3=rev3*10+rim3;
        modifiednum2=modifiednum2/10;
        goto loop3;
    }
    interchanged=rev3*10;
    printf("%d",interchanged+num);
    return 0;
}
// ======================================================================================
// ======================================================================================
// Question 15: Write a program to get a number from user and if the last digit of the number is even print the same number. If the last digit of the number is odd then subtract 1 from the last digit and print the number.
// (Note: Last digit -MSB)
// Answer: Input : 123456 - Output – 123456
// Input : 96895439- Output – 86895439
// Input : 675 – Output - 575
#include <stdio.h>
int main(){
    int num,evenmsb,oddmsb,rim,rev=0,sub,rim2,rev2;
    printf("enter the num:");
    scanf("%d",&num);
    evenmsb=num;
    loop:
    if(num>9){
        rim=num%10;
        rev=rev*10+rim;
        num=num/10;
        goto loop;
    }
    if((evenmsb%10)%2==0){
        printf("%d",evenmsb);
    }
    else{
        sub=num-1;
        rev2=sub;
        restore:
        if(rev>0){
            rim2=rev%10;
            rev2=rev2*10+rim2;
            rev=rev/10;
            goto restore;
        }
        printf("%d",rev2);
    }
    return 0;
}
// ======================================================================================
// Question 16: Write a program get number from user print whether that number is prime or not.
// Answer: Input : 31 - Output : Prime
// Input : 27 - Output : Not Prime.
#include <stdio.h>
#include <stdbool.h>
int main(){
    int num,count=0,prime=false,i=2;
    printf("enter the num:");
    scanf("%d",&num);
    if(num==0 || num==1){
        printf("Not Prime");
    }
    else{
         loop:
    if(i<num){
        if(num%i==0){
            count=count+1;
        }
        i=i+1;
        goto loop;
    }
    if(count==0){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
    }
    return 0;
}
// ======================================================================================
// ======================================================================================
// Question 17: Write a program to get a number from user, print whether that number is prime, and sum of digit is equal to 14.
// Answer: Input: 59 - Output: Prime & Sum of Digits is 14
// Input: 77 - Output: Not Prime but sum of digits is 14
// Input: 13 - Output: Prime, but sum of Digits is not 14
#include <stdio.h>
#include <stdbool.h>
int main(){
    int num,prime=false,i=2,count=0,sum=0,sum1;
    printf("enter the num:");
    scanf("%d",&num);
    if(num==0||num==1){
        printf("Not prime");
    }
    else{
        loop:
        if(i<num){
            if(num%i==0){
                count=count+1;
            }
            i=i+1;
            goto loop;
        }
       loop_sum:
       if(num>0){
        sum=sum+num%10;
        num=num/10;
        goto loop_sum;
       }
       printf("%d\n",sum);
    }
    printf("%d\n",sum);
    sum1=sum;
    if(count==0 && (sum1 ==14)){
        printf("Prime & Sum of Digits is 14");
    }
    else if(count==0 && sum1 !=14){
        printf("Prime, but Sum of Digits is not 14");
    }
    else if(count!=0 && sum1 == 14){
        printf("Not prime, but Sum of Digits is 14");
    }
    else if(count!=0 && sum1!=14){
        printf("Not prime & Sum of Digits is not 14");
    }
    return 0;
}
// ======================================================================================
// Question 18: Write a program to get number from user, print whether that number’s first two digits (ten’s digits and one’s digit) is prime.
// Answer: Input: 359 - Output: Prime
// Input: 3577 - Output: Not Prime
#include <stdio.h>
int main(){
    int num,last_two_digits,i=2,count=0;
    printf("enter the num:");
    scanf("%d",&num);
    last_two_digits=num%100;
    if(last_two_digits==0 || last_two_digits==1){
        printf("Not prime\n");
    }
    else{
        loop:
        if(i<last_two_digits){
            if(last_two_digits%i==0){
                count=count+1;
            }
            i=i+1;
            goto loop;
        }
         if(count==0){
        printf("Prime\n");
    }
    else{
        printf("Not prime\n");
    }
    }
   
    return 0;
}
// ======================================================================================
// Question 19: Write a program to get a 4-digit number from user, print whether that number’s middle two digits (hundred’s digit and ten’s digit) is prime.
// Answer: Input: 6359 - Output: Not Prime
// Input: 3517 - Output: Not Prime
#include <stdio.h>
int main(){
    int num,middle_digits,i=2,count=0;
    printf("enter the num:");
    scanf("%d",&num);
    if(num>999&&num<10000){
        middle_digits=((num/10)%100);
        printf("%d\n",middle_digits);
        loop:
        if(i<middle_digits){
            if(middle_digits%i==0){
                count=count+1;
            }
            i=i+1;
            goto loop;
        }
        printf("%d\n",count);
        if(count==0){
            printf("Prime");
        }
        else{
            printf("Not prime");
        }
    }
    else{
        printf("enter a valid 4digit +ve num!");
    }
    return 0;
}
// ======================================================================================
// Question 20: Write a program print total number of single digit Prime numbers
// Answer: 4
#include <stdio.h>
int main(){
    int num=2,div,i=2,count=0,sum=0;
   for(int i=2;i<10;i++){
    for(int j=2;j<i;j++){
        if(i%j==0){
            count=count+1;
        }
    }
    if(count==0){
        sum=sum+i;
    }
    else{
        count=0;
    }
  
}
printf("%d\n",sum);
return 0;
}
// ======================================================================================




