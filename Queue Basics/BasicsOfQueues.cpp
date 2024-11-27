// Queues 
// Some queues operation or some queues stl function 
// Queues -: STL fun -> push, pop, back, front, size.

// queue display in normal order by using a same queue but,
// queue display in reverse order by using a extra stack.



// #include<iostream>
// #include<queue>
// using namespace std;
// int main()
// {
//     queue<int>q;
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);
//     q.push(50);
//     cout<<q.size()<<endl;
//     cout<<q.front()<<endl;
//     cout<<q.back()<<endl;
//     q.pop();
//     cout<<q.size()<<endl;
//     cout<<q.front()<<endl;
//     cout<<q.back()<<endl;

// }




// // Ques - Display Queues T.C. = O(n) But S.C. = O(1) becoz while we display queue we use same the queue
// first we pop the front ele of the q and the print then again we push front ele to the same q 
// q is passed by value and 1st we find size of the queue

// // Normal Order 

// #include<iostream>
// #include<queue>
// using namespace std;
// void display(queue<int>& q)
// {
//     int n=q.size();
//     for(int i=1; i<=n; i++) // loop travel karega n ele. tak
//     {
//         int x=q.front();
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
//     display(q);
//     q.pop();
//     display(q);
// }

// // 10 20 30 40 50 
// // 20 30 40 50



// Ques - Display Queues T.C. = O(n) But S.C. = O(1)

// Reverse the queue using a stack  

// #include<iostream>
// #include<queue>
// #include<stack>
// using namespace std;
// void display(queue<int>q)
// {
//     int n=q.size();
//     for(int i=1; i<=n; i++)
//     {
//         int x=q.front();
//         cout<<x<<" ";
//         q.pop();
//         q.push(x);
//     }
//     cout<<endl;
// }

// void reverse(queue<int>q)
// {
//     stack<int>st;
//     // ele. goes from queue to stack
//     while(q.size()>0)
//     {
//         int x=q.front();
//         q.pop();
//         st.push(x);
//     }
//     // ele. goes from stack to queue
//     while(st.size()>0)
//     {
//         int x=st.top();
//         st.pop();
//         cout<<x<<" ";
//         q.push(x);
//     }
// cout<<endl;
// }

// int main()
// {
//     queue<int>q;
//     q.push(10);
//     q.push(20);
//     q.push(30);
//     q.push(40);
//     q.push(50);
//     display(q);
//     reverse(q);
//     display(q);
//     reverse(q);
//     display(q);

// }


// // 10 20 30 40 50 
// // 50 40 30 20 10
// // 10 20 30 40 50 
// // 50 40 30 20 10
// // 10 20 30 40 50


// Ques.1-> Remove all the elements present at even positions in queue.
#include<iostream>
#include<queue>
using namespace std;
void display(queue<int>&q)
{
    int n=q.size();
    for(int i=1; i<=n; i++)
    {
        int x=q.front();
        q.pop();
        cout<<x<<" ";
        q.push(x);
    }
    cout<<endl;
}
void removeAtEven(queue<int>&q)
{
    int n=q.size();

    // for(int i=0; i<n; i++)
    // {
    //     if(i%2==0) q.pop(); // even idx
    //     else // odd idx
    //     {
    //         int x=q.front();
    //         q.pop();
    //         q.push(x);
    //     }
    // }
    
    // OR 

    for(int i=0; i<n; i++)
    {
        if(i%2!=0) // odd idx
        {
            int x=q.front();
            q.push(x);
        } // even idx 
        q.pop();
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
    removeAtEven(q);
    display(q);
}
// ele.= 10 20 30 40 50 
// idx =  0  1  2  3  4
// ans =    20    40 
// idx - 0,2,4 ele.s are removed.