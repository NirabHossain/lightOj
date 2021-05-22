#include <iostream>     // std::cout
#include <algorithm>    // std::sort
#include <vector>       // std::vector

using namespace std;
bool myfunction (int i,int j) { return (i<j); }

struct myclass {
  bool operator() (int i,int j) { return (i<j);}
} myobject;

int main () {
  int myints[] = {32,71,12,45,26,80,53,33};
  vector<int> myvector (myints, myints+8);               // 32 71 12 45 26 80 53 33
  sort (myvector.begin(), myvector.begin()+4);           //(12 32 45 71)26 80 53 33
  sort (myvector.begin()+4, myvector.end(), myfunction); // 12 32 45 71(26 33 53 80)
  sort (myvector.begin(), myvector.end(), myobject);     //(12 26 32 33 45 53 71 80)
  cout << "myvector contains:";
  for (vector<int>::iterator it=myvector.begin(); it!=myvector.end(); ++it)
    cout << ' ' << *it;
    cout << '\n';
  return 0;
}

