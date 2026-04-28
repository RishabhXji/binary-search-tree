// queue rev static array
#include <iostream>
using namespace std;

class Queue {
private:
    static const int SIZE = 100;
    int arr[SIZE];
    int front;
    int rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    bool isEmpty() {
        return front == -1;
    }

    bool isFull() {
        return rear == SIZE - 1;
    }

    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue is full" << endl;
            return;
        }

        if (isEmpty()) {
            front = 0;
        }

        rear++;
        arr[rear] = value;
    }

    int dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return -1;
        }

        int value = arr[front];

        if (front == rear) {
            front = -1;
            rear = -1;
        } else {
            front++;
        }

        return value;
    }

    void reverse() {
        int left = front;
        int right = rear;

        while (left < right) {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
        }
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }

        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);

    cout << "original queue: ";
    q.display();

    q.reverse();

    cout << "reversed queue: ";
    q.display();

    return 0;
}
// explain
// This code implements a queue data structure using a static array. The `Queue` class has