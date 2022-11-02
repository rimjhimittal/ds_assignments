
#include <iostream>

using namespace std;

class queue
{
public:
    int q[5], front, rear, x, result;
    queue()
    {
        front = 0;
        rear = 0;
    }
    bool isEmpty()
    {
        if (front == rear)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void enq()
    {
        if (rear >= 5)
            cout << "\nQueue overflow!!\n";
        else
        {
            cout << "\nEnter the number to be inserted: ";
            cin >> x;
            rear++;
            q[rear] = x;
            cout << "\nNumber pushed in the queue:" << q[rear];
        }
    }
    void dque()
    {
        if (rear == 0)
            cout << "\nQueue underflow!!\n";
        else
        {
            if (front == rear)
            {
                front = 0;
                rear = 0;
            }
            else
                front++;
        }
        cout << "\nDeleted element is:";
        result = q[front];
        cout << result;
    }
    void disp()
    {
        if (rear == 0)
            cout << "\nQueue underflow!!\n";
        else
            cout << "\nContents of queue is:";
        for (int i = front + 1; i <= rear; i++)
            cout << q[i] << " ";
    }
    void isFull()
    {
    }
};
int main()
{
    int c;
    queue qu;
    cout << "\n**********";
    cout << "QUEUE";
    cout << "**********\n";
    do
    {
        cout << "\n1.Insertion\n2.Deletion\n3.Display\n4. IsEmpty";
        cout << "\nEnter your choice:";
        cin >> c;
        switch (c)
        {
        case 1:
            qu.enq();
            break;
        case 2:
            qu.dque();
            break;
        case 3:
            qu.disp();
            break;
        case 4:
            qu.isEmpty();
        default:
            cout << "\nInvalid choice!!\n";
        }
    } while (c < 4);
    return 0;
}