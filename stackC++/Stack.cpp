#include <iostream>

#define STACK_SIZE 100

using namespace std;

class stackM
{
    int *arr;
    int topIndex;

public:
    stackM(int size)
    {
        arr = new int[size];
        topIndex = -1;
    }

    ~stackM()
    {
        delete[] arr;
    }

    void push(int x)
    {
        if (topIndex == STACK_SIZE - 1)
        {
            cout << "Stack Overflow" << endl;
            return;
        }
        topIndex++;
        arr[topIndex] = x;
    }

    void pop()
    {
        if (topIndex == -1)
        {
            cout << "Stack underflow" << endl;
            return;
        }
        topIndex--;
    }

    int peek()
    {
        if (topIndex == -1)
        {
            cout << "Stack underflow" << endl;
            return -1;
        }
        return arr[topIndex];
    }

    bool isEmpty()
    {
        return topIndex == -1;
    }
};

int main()
{
    stackM st(10);
    st.push(5);
    st.push(10);
    st.push(15);
    st.push(20);
    st.push(25);
    st.push(5);
    st.push(10);
    st.push(15);
    st.push(20);
    st.push(25);

    cout << st.peek() << endl;
    st.pop();

    return 0;
}
