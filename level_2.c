// Question:1 Write a loop program to print 1 to 5 on one by one. 
// Answer: 1 
// 2 
// 3 
// 4
// 5
#include <stdio.h>
int main(){
    for(int i=1;i<6;i++){
        printf("%d\n",i);
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
    for(int i=5;i>=1;i--){
        printf("%d\n",i);
    }
    return 0;
}
// ======================================================================================
// Question:3 Write a loop program to print sum of 1 to 5. 
// Answer: 15
#include <stdio.h>
int main(){
    int sum=0;
    for(int i=1;i<=5;i++){
        sum=sum+i;
    }
    printf("%d",sum);
    return 0;
}
// ======================================================================================
// Question:4 Write a loop program to print sum of 6 to 1. 
// Answer: 21
#include <stdio.h>
int main(){
    int sum;
    sum=0;
    for(int i=6;i>=1;i--){
         sum=sum+i;
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
    for(int i=1;i<=9;i++){
        if((i%2)!=0){
            printf("%d\n",i);
        }
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
    for(int i=10;i<=20;i++){
        if((i%2)!=0){
            printf("%d\n",i);
        }
    }
    return 0;
}
// ======================================================================================
// Question:7 Write a loop program to print the two-digit odd numbers, who’s sum of 
// digits are 7. 
// Answer: 25 
// 43 
// 61
/*#include <stdio.h>
int main(){
    for(int i=10;i<100;i++){
        if(((i%2)!=0)&&((i%10)+(i/10))==7)
            printf("%d\n",i);
    }
    return 0;
}*/
// ======================================================================================
// Question:8 Write a loop program to print the two-digit even numbers, who’s sum of 
// digits are 6. 
// Answer: 24 
// 42 
// 60
#include <stdio.h>
int main(){
    for(int i=10;i<100;i++){
        if((i%2)==0&&((i%10)+(i/10)==6)){
            printf("%d\n",i);
        }
    }
    return 0;
}
// ======================================================================================
// Question:9 Write a loop program to print the sum of two-digit numbers whose  
// one’s digit is 5. 
// Answer: 495
#include <stdio.h>
int main(){
    int sum=0;
    for(int i=10;i<100;i++){
        if(i%10==5){
            sum=sum+i;
        }
    }
    printf("%d",sum);
    return 0;
}
// ======================================================================================
// Question:10 Write a loop program to print the sum of two-digit odd numbers, whose 
// ten’s digit is 7. 
// Answer: 375
#include <stdio.h>
int main(){
    int sum=0;
    for(int i=10;i<100;i++){
        if((i%2!=0)&&(i/10)==7){
            sum=sum+i;
        }
    }
    printf("%d",sum);
    return 0;
}
// ======================================================================================
