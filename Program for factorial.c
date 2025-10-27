#include<stdio.h>
long long factorial(int n);
int main(){
int num =5;
printf("Factorial of  %d is %lld\n", num, factorial(num));
return 0;
}
long long factorial(int n){
  if(n==0){
    return 1;
  }else {
  return (n*factorial(n-1));
  }
}





