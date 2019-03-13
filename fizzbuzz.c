#include <stdio.h>
int main(void){
    for(int i = 1; i <=100;i++)//counts 1 through 10
        if(i%3==0&&i%5==0){
            printf("FizzBuzz\n");}//if a mulitple by 3 and 5 it will print FizzBuzz
    else if(i%3==0){
        printf("Fizz\n");}//if a mulitple of 3 it will print Fizz
    else if(i%5==0){
        printf("Buzz\n");}//if a mulitple of 5 it will print Buzz
    else{
        printf("%i\n",i);}//if it is not a mulitple of either it will just print the number 
}
