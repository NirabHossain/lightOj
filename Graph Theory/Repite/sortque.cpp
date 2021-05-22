#include<bits/stdc++.h>
using namespace std;
void sortQueue(queue<int> &q)
{
    for (int i = 1; i <= q.size(); i++)
    {
        int min_index = minIndex(q, q.size() - i);
        insertMinToRear(q, min_index);
    }
}

// driver code
int main()
{
  queue<int> q;
  q.push(30);
  q.push(11);
  q.push(15);
  q.push(4);

  // Sort queue
  sortQueue(q);

  // Print sorted queue
  while (q.empty() == false)
  {
     cout << q.front() << " ";
     q.pop();
  }
  cout << endl;
  return 0;
}
