#define hell -1
class MyCircularDeque {
    vector<int> dq;
    int front;
    int rear;
    int size;

public:
    MyCircularDeque(int size): size(size),dq(size,0) , front(-1), rear(0) {
    }

    bool isFull() {

        return (front == (rear + 1) % size);
    }

    bool isEmpty() {

        return front == -1;
    }

    bool insertFront(int data) {
        if (isFull()) {
            return 0;
        }

        if (front == -1) {
            front = 0;
            rear = 0;
        }
        else {
            front = ((front - 1) % size + size) % size;
        }
        dq[front] = data;
        return 1;
    }

    bool insertLast(int data) {
        if (isFull()) {
            return 0;
        }

        if (front == -1) {
            front = 0;
            rear = 0;
        }
        else {
            rear = (rear + 1) % size;
        }
        dq[rear] = data;
        return 1;
    }

    bool deleteFront() {
        if (isEmpty()) {
            return 0;
        }

        if (front == rear) {
            front = -1;
            rear = -1;
        }
        else {
            front = (front + 1) % size;
        }
      return 1;
    }

    bool deleteLast() {
        if (isEmpty()) {
            return 0;
        }

        if (front == rear) {
            front = -1;
            rear = -1;
        }
        else {
            rear = ((rear - 1) % size + size) % size;
        }
      return 1;
    }

    int getFront() {
        if (isEmpty())
            return hell;

        return dq[front];

    }

    int getRear() {
        if (isEmpty())
            return hell;

        return dq[rear];

    }

};