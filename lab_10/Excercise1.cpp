#include <iostream>
#include "Queue.h"

using namespace std;

int main() {
Queue queue;
try {
   if (queue.dequeue() == 1) {
       throw 20;
   }
}
catch (int x){
        cout << "Exception: queue empty." << endl;
}
for (int i = 0; i < 10; i++) {
    queue.enqueue(i);
}
queue.print();
cout << "" << endl;
cout << "front of queue: " << queue.front() << endl;
cout << "removed value: " << queue.dequeue() << " from queue."  << endl;
cout << "front of queue: " << queue.front() << endl;
cout << "size of queue: " << queue.size() << endl;
queue.print();
}
