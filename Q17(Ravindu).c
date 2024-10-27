#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void below10 (int num){
    switch (num){
        case 1:printf("One");
        break;
        case 2:printf("Two");
        break;
        case 3:printf("Three");
        break;
        case 4:printf("Four");
        break;
        case 5:printf("Five");
        break;
        case 6:printf("Six");
        break;
        case 7:printf("Seven");
        break;
        case 8:printf("Eight");
        break;
        case 9:printf("Nine");
        break;
    }
}

void below20 (int num){
    
    switch (num){
        case 10:printf("Ten");
        break;
        case 11:printf("Eleven");
        break;
        case 12:printf("Twelve");
        break;
        case 13:printf("Thirteen");
        break;
        case 14:printf("Fourteen");
        break;
        case 15:printf("Fifteen");
        break;
        case 16:printf("Sixteen");
        break;
        case 17:printf("Seventeen");
        break;
        case 18:printf("Eightteen");
        break;
        case 19:printf("Nineteen");
        break;
    }
    
}

void below100 (int num){
    
    switch (num){
        case 2:printf("Twenty");
        break;
        case 3:printf("Thirty");
        break;
        case 4:printf("Fourty");
        break;
        case 5:printf("Fifty");
        break;
        case 6:printf("Sixty");
        break;
        case 7:printf("Seventy");
        break;
        case 8:printf("Eighty");
        break;
        case 9:printf("Ninety");
        break;
    }
    
}

void blabla (int num){
    
    switch (num){
        
        case 1:printf("Hundred");
        break;
        case 2:printf("Thousand");
        break;
        case 3:printf("Million");
        break;
        case 4:printf("Billion");
        break;
    }
}

int main() {
    int testCases;
    scanf("%d", &testCases);
    long long *test = (long long *)malloc(testCases * sizeof(long long));
    for(int i = 0;i < testCases; i++)
        scanf("%lld", (test + i));
        
        
    void (*functions[3])(int) = {below10,below100,blabla};   
    
    for(int i = 0;i < testCases; i++){ 
        int theNum = test[i];
        int count = 0;
        int rem = theNum % 100;
        if(rem < 20 && rem > 9){
            below20(rem);
            theNum /= 100; 
            count = 2;
        }
        if(rem < 10){
            below10(rem);
            theNum /= 10;
            count = 1;
        }
        while(theNum > 0){
            rem = theNum % 10;
            
            // to be continue
            theNum /= 10;
            count++;
        }
    }
    return 0;
}
