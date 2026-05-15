


// // // // //code for fibbanoci stack 
 #include <iostream>
    using namespace std;
    #define MAX 100
    class Stack {
        int top;
        int arr[MAX];
    public:
        Stack() { top = -1; }
        bool isFull() { return top == MAX - 1; }
        bool isEmpty() { return top == -1; }
        void push(int x) {
            if (!isFull()) arr[++top] = x;
        }
        int pop() {
            if (!isEmpty()) return arr[top--];
            return -1;
        }
        int peek() {
            if (!isEmpty()) return arr[top];
            return -1; 
        }
    };
    int fibonacci(int n) {
        if (n <= 1) return n;
        Stack s;
        s.push(0);
        s.push(1);
        for (int i = 2; i <= n; i++) {
            int a = s.pop();
            int b = s.peek();
            s.push(a);
            s.push(a + b);
        }
        return s.pop();
    }
    int main() {
        int n;
        cout << "Enter a positive integer: ";
        cin >> n;
        cout << "Fibonacci(" << n << ") = " << fibonacci(n) << endl;
        return 0;
    } 