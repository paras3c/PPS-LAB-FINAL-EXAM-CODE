#include<stdio.h>
int Grt(int a, int b){
if (a>b){
return a;
}
else{
return b;
}
}
int fact(int n){
int i,f=1;
for(i=1; i<=n; i++){
f=f*i;
}
return f;
}
int main(){
int a, b, large, factoriala, factorialb;
printf("Enter the odd number: ");
scanf("%d", &a);
printf("Enter the even number: ");
scanf("%d", &b);
factoriala = fact(a);
printf("Factorial of the odd number %d is: %d \n", a, factoriala);
factorialb = fact(b);
printf("Factorial of the even number %d is: %d \n", b, factorialb);
large = Grt(factoriala,factorialb);
printf("Largest is %d", large);
return 0;
}