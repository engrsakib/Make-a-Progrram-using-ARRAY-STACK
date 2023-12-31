#include <bits/stdc++.h>

using namespace std;
int stacak[100], n = 100, head = -1;
void push_stack(int data)
{
    if (head >= n - 1)
    {
        cout << endl << endl << "\t" << "STACK OVER Flow" << endl << endl;
        return;
    }
    head++;
    stacak[head] = data;
}
void pop()
{
    if (head <= -1)
    {
        cout << endl << endl << "\t" << "STACK UNDER Flow" << endl << endl;
        return;
    }
    cout << "The popped element is " << stacak[head] << endl;
    head--;
}
void display_all()
{
    if (head >= 0)
    {
        cout << endl << endl << "\t" << "Stack elements are: ";
        for (int i = head; i >= 0; i--)
        {
            cout << stacak[i] << " ";
        }
        cout << endl << endl << endl;
    }
    else
        cout << endl << endl << "\t" << "Stack is empty" << endl << endl;
}
void display_top()
{
    if (head >= 0)
    {
        cout << endl << endl << "\t" << "Head of the stack: " << stacak[head] << endl;
    }
    else
    {
        cout << endl << endl << "\t" <<  "Stack is empty" << endl;
    }
}
int main()
{
    // Md. Nazmus Sakib
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int ch;
    while (true)
    {
        cout << endl;
        cout << 1 << " "
             << "PUSH in STACK" << endl;
        cout << 2 << " "
             << "POP in STACK" << endl;
        cout << 3 << " "
             << "PRINT HEAD Element" << endl;
        cout << 4 << " "
             << "PRINT ALL Element" << endl;
        cout << 5 << " "
             << "QUIT" << endl;
        cout << endl
             << endl
             << "Enter select a menue: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
        {
            cout << "Enter a value ";
            int val;
            cin >> val;
            push_stack(val);
            break;
        }
        case 2:
        {
            pop();
            break;
        }
        case 3:
        {
            display_top();
            break;
        }
        case 4:
        {
            display_all();
            break;
        }
        case 5:
        {
            return 0;
        }
        default:
            cout << endl
                 << endl
                 << "You select wrong menue" << endl
                 << endl;
            break;
        }
    }
    return 0;
}