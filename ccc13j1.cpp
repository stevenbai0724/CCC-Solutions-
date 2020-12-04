#include <iostream>
using namespace std;

int main() {
  int x, y;
  cin >> x >> y;
  int diff = y - x;
  y += diff;
  cout << y << '\n';
  return 0;
}