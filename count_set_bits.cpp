//this code will have all the methos  that can be used to count the set bits of a number
#include <bits/stdc++.h>
using namespace std;
 

int countSetBits1(int n){
  //Time Complexity: O(log n)
  //Auxiliary Space: O(log n) for recursive stack space
    if (n == 0) return 0;
    else return (n & 1) + countSetBits(n >> 1);
}

int countSetBits2(int n){
  //Brian Kernighan’s Algorithm:
  //Time Complexity: O(log n)
  //Auxiliary Space: O(1)
  int count = 0;
  while (n){
  n &= (n - 1);
  count++;
  }
  return count;
}

int main(){
    int n = 9;
    cout << countSetBits1(n);
  //cout << countSetBits2(n);
  //cout << __builtin_popcount(n) << endl;
    return 0;
}
