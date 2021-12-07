#include <iostream>
#include "Queue_char.h"

using namespace std;

int main() {
Queue queue;
cout << "Function call   " << "|   Output   |" << "  front queue rear" << endl;
cout << "dequeue()";
cout << "    |     ";
 try {
   if (queue.dequeue() == 1) {
       throw 20;
   }
}
catch (int x){
        cout << "Exception: queue empty.";
}
cout << "    |";
queue.print();
cout << "" << endl;
cout << "enqueue(D)";
cout << "    |      |    ";
queue.enqueue('D');
queue.print();
cout << "" << endl;
cout << "enqueue(A)";
cout << "    |      |    ";
queue.enqueue('A');
queue.print();
cout << "" << endl;
cout << "dequeue()";
cout << "    |   " << queue.dequeue() << "   |    ";
queue.print();
cout << "" << endl;
cout << "size()";
cout << "    |   " << queue.size() << "   |    ";
queue.print();
cout << "" << endl;
cout << "enqueue(D)";
cout << "    |      |    ";
queue.enqueue('D');
queue.print();
cout << "" << endl;
cout << "isEmpty()";
    if (queue.isEmpty() == 1) {
        cout << "|   True    |";
    }
    if(queue.isEmpty() == 0) {
       cout << "|    False   |";
    }
queue.print();
cout << "" << endl;
cout << "front()";
cout << "    |   " << queue.front() << "   |    ";
queue.print();
cout << "" << endl;
cout << "enqueue(T)";
cout << "    |      |    ";
queue.enqueue('T');
queue.print();
cout << "" << endl;
cout << "front()";
cout << "    |   " << queue.front() << "   |    ";
queue.print();
}

