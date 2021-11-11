#include <iostream>
using namespace std;

int sum(int n){
  int newVal = 0;
  for(int i = 1; i <= n; i++){
    newVal = newVal + i;
  }
  return newVal;
}

int main(){
  int n;
  cout << "Enter number." << endl;
  cin >> n;
  int val = sum(n);
  cout << val << endl;
  return 0;
}
