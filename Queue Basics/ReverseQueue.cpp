// Queue -: push , pop , top(front) , back(rare) , size.

// #include<iostream>
// #include<queue>
// using namespace std;
// void display(queue<int>& q)
// {
//     int n=q.size();
//     for(int i=1; i<=n; i++)
//     {
//         int x= q.front();
//         cout<<x<<" ";
//         q.pop();
//         q.push(x);
//     }
//     cout<<endl;
// }
// int main()
// {
//     queue<int>q;
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);
//     q.push(50);
//     cout<<q.size()<<endl;
//     q.pop();
//     cout<<q.size()<<endl;
//     cout<<q.front()<<endl;
//     cout<<q.back()<<endl;
//     // display our queues 
//     cout<<"Display the queues elements "<<endl;
//     display(q);
// }




// Reverse the queue using stack 
#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void display(queue<int>& q)
{
    int n=q.size();
    for(int i=1; i<=n; i++)
    {
        int x= q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
}

// reverse the queue using stack not using extra queue.
void reverse(queue<int>& q)
{
    stack<int>st;
    while(q.size()>0)
    {
        int x=q.front();
        st.push(x);
        q.pop();
    }

    while(st.size()>0)
    {
        int x=st.top();
        st.pop();
        q.push(x);
    }
}
int main()
{
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    display(q);
    cout<<endl;

    reverse(q);
    cout<<endl;
    display(q);
    cout<<endl;

    reverse(q);
    cout<<endl;
    display(q);
    cout<<endl;

}