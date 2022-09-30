#include <iostream>
#include<stack>
using namespace std;

class queue{
    stack<int> st1;
    stack<int> st2;
    public:
    void push(int x){
        st1.push(x);
    }
    int pop(){
        if (st1.empty() and st2.empty())
        {
            cout<<"cannot"<<endl;
            return -1 ;

        }
        if (st2.empty())
        {
            while (!st1.empty())
            {
                st2.push(st1.top());
                st1.pop();
            
            }
            
        }
        int x = st2.top();
        st2.pop();
        return x;
    }

    bool empty(){
        if (st1.empty() &&  st2.empty())
        {
            return true;
        }
        return false;
    }
};
class queue2{
    stack<int> st;
    public:
    void push (int z){
        st.push(z);
    }

    int pop(){
        if (st.empty())
        {
            cout<<"no element to pop"<<endl;
            return -1;
        }
        int x = st.top();
        st.pop();
        if (st.empty())
        {
            return x;
        }
        int y = pop();
        st.push(x);
        return y;
    }
    bool empty(){
        if (st.empty())
        {
            return true;
        }
        return false;
    }
};
int main (){

    queue2 q1;
    q1.push(1);
    q1.push(2);
    q1.push(3);
    q1.push(4);
    cout <<q1.pop()<<endl;
    q1.push(5);
    cout <<q1.pop()<<endl;
    cout <<q1.pop()<<endl;
    cout <<q1.pop()<<endl;
    cout <<q1.pop()<<endl;
    cout <<q1.pop()<<endl;

    return 0;
}