#include<iostream>
using namespace std;

int factorial(int n); //factorial function declaration

int main() {

  int n;

  cout << "Enter a positive integer: ";
  cin >> n;

  cout << "Factorial of " << n << " = " << factorial(n);//call

  return 0;
}
//factorial func
int factorial(int n) {
  if(n > 1)
    return n * factorial(n - 1); //main formula for factorial
  else
    return 1;
}

//this code is has been coded by abhinav shrivastav
