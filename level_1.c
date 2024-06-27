// Question: Get a number from user and add 2 to that number and print the result.
// Example: Input :45 Output 47. Input:56789 Output:56791
// code:
#include <stdio.h>
int main(){
    int num,res;
    printf("enter a Number:");
    scanf("%d",&num);
    res=num+2;
    printf("%d",res);
    return 0;
// ======================================================================================
// Question: Get a number from user and subtract 5 to that number and print the result.
// Example: Input :45 Output 40. Input:56789 Output:56784
#include <stdio.h>
int main(){
    int num,res;
    printf("enter a num:");
    scanf("%d",&num);
    res=num-5;
    printf("%d",res);
    return 0;
}
// ======================================================================================

// Question: Get a number from user and multiply 3 to that number and print theresult.
// Example: Input: 45 Output 135. Input: 1200 Output: 3600
#include <stdio.h>
int main(){
    int num,res;
    printf("enter a num:");
    scanf("%d",&num);
    res=num*3;
    printf("%d",res);
    return 0;
}
// ======================================================================================
// Question: Get a number from user and divide by the number by 6 and print thequotient.
// Example: Input: 45 Output 7. Input: 143 Output: 23
#include <stdio.h>
int main(){
    int num, res;
    printf("enter the num:");
    scanf("%d",&num);
    res=num/6;
    printf("%d",res);
    return 0;
}
// ======================================================================================
// Question: Get a number from user and divide by the number by 8 and print the remainder.
// Example: Input: 45 Output 5. Input: 143 Output: 7
#include <stdio.h>
int main(){
    int num,res;
    printf("enter a num:");
    scanf("%d",&num);
    res=num%8;
    printf("%d",res);
    return 0;
}
// ======================================================================================
// Question: Get a two-digit number from user and print the one’s digit.
// Example: Input: 45 Output 5. Input: 56 Output: 6
#include <stdio.h>
int main(){
    int num,res;
    printf("enter a 2digit num:");
    scanf("%d",&num);
   if((num<-9&&num>-100)||(num>9&&num<100)){
     res=num%10;
    printf("%d",res);
   }
   else{
    printf("enter a valid 2digit number!");
   }
    return 0;
}
// ======================================================================================
// Question: Get a two-digit number from user and print the ten’s digit.
// Example: Input: 45 Output 4. Input: 56 Output: 5
#include <stdio.h>
int main(){
    int num,res;
    printf("enter a 2digit num:");
    scanf("%d",&num);
    if((num<-9&&num>-100)||(num>9&&num<100)){
        res=num/10;
        printf("%d",res);
    }
    else{
        printf("enter a valid 2digit num!");
    }
    return 0;
}
// ======================================================================================
// Question: Get a three-digit number from user and print the one’s digit.
// Example: Input: 456 Output 6. Input: 569 Output: 9
#include <stdio.h>
int main(){
    int num,res;
    printf("enter a 3digit num:");
    scanf("%d",&num);
    if((num>-1000 && num<-99)||(num>99 && num<1000)){
        res=num%10;
        printf("%d",res);
    }
    else{
        printf("enter a valid 3digit num!");
    }
    return 0;
}
// ======================================================================================
// Question: Get a three-digit number from user and print the hundred’s digit.
// Example: Input: 456 Output 4. Input: 569 Output: 5
#include <stdio.h>
int main(){
    int num,res;
    printf("enter a 3digit num:");
    scanf("%d",&num);
    if(((num<-99)&&(num>-1000)) || ((num>99)&&(num<1000))){
        res=num/100;
        printf("%d",res);}
    else{
        printf("enter a valid 3digit num!"); }
    return 0;
}
// ======================================================================================
// Question: Get a three-digit number from user and print the ten’s digit.
// Example: Input: 456 Output 5. Input: 569 Output: 6
#include <stdio.h>
int main(){
    int num,res1,res2;
    printf("enter a 3digit num:");
    scanf("%d",&num);
    if((num<-99&&num>-1000)||(num>99&&num<1000)){
        res1=num/10;
        res2=res1%10;
        printf("%d",res2);
    }
    else{
        printf("enter a valid 3digit num!");
    }
}
// ======================================================================================
// Question: Get a two-digit number from user and print sum the digits.
// Example: Input: 56 Output 11. Input: 69 Output: 15
#include <stdio.h>
int main(){
    int num,res1,res2,sum;
    printf("enter a 2digit num:");
    scanf("%d",&num);
    if((num<-9&&num>-100)||(num>9&&num<100)){
        res1=num%10;
        res2=num/10;
        sum=res1+res2;
        printf("%d",sum);
    }
    else{
        printf("enter a 2digit num!");
    }
    return 0;
}
// ======================================================================================
// Question: Get a three-digit number from user and print sum the digits.
// Example: Input: 562 Output 13. Input: 469 Output: 19
#include <stdio.h>
int main(){
    int num,res1,res2,sum=0;
    printf("enter a 3digit num!:");
    scanf("%d",&num);
    if((num<-99&&num>-1000)||(num>99&&num<1000)){
         loop:
         if(num!=0){
            res1 = num%10;
            sum = res1+sum;
            num=num/10;
            goto loop;
            }
    printf("%d",sum);
    }
    else{
        printf("enter a valid 3digit num!");
    }
    return 0;
}
//===============================================================================
// Question: Get a two-digit number from user and print the reverse of the number.
// Example: Input: 56 Output 65. Input: 59 Output: 95
#include <stdio.h>
int main(){
    int num,rim,rev=0;
    printf("enter a 2digit num:");
    scanf("%d",&num);
    if((num<-9&&num>-100)||(num>9&&num<100)){
        loop:
        if(num>0){
            rim =num%10;
            rev=rev*10+rim;
            num =num/10;
            
            goto loop;
        }
        printf("%d\n",rev);
        
    }
    else{
        printf("enter a valid 2digit num!");

    }
    return 0;
}
// ======================================================================================

