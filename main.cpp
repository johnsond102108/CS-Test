#include <iostream>
using namespace std;

int sum(int n){
  int newVal = 0;
  for(int i = 1; i <= n; i++){
    newVal = newVal + i;
  }
  return newVal;
}

int product(int n){
  int newVal = 1;
  for(int i = 1; i <= n; i++){
    newVal = newVal * i;
  }
  return newVal;
}

int main(){
  int n;
  cout << "Enter number." << endl;
  cin >> n;
  int val = sum(n);
  cout << "Sum: " << val << endl;
  int val2 = product(n);
  cout << "Product: " << val2 << endl;
  return 0;
}
