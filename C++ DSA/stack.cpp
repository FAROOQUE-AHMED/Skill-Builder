#include <iostream>
#include <vector>
#include <list>
#include <stack>
using namespace std;
//-------------------------------------------------using VECTOR-------------------------------------------------
// class stack
// {
//     vector<int> v;

// public:
//     void push(int val)
//     {
//         v.push_back(val);
//     }
//     void pop()
//     {
//         v.pop_back();
//         return;
//     }
//     int top()
//     {
//         return v[v.size() - 1];
//     }
//     bool empty()
//     {
//         return v.size() == 0;
//     }
// };
// int main()
// {
//     stack st;
//     st.push(2);
//     st.push(5);
//     st.push(1);
//     st.push(9);
//     st.push(3);
//     st.push(7);
//     // st.pop();
//     // st.top();
//     while (st.empty() != true)
//     {
//         cout << st.top() << " ";
//         st.pop();
//     }
//     cout << endl;
//     return 0;
// }

//  -------------------------------------stack using LINKEDLIST------------------------------------

// class stack
// {
//     list<int> ll;

// public:
//     void push(int val)
//     {
//         ll.push_front(val);
//         return;
//     }
//     void pop()
//     {
//         ll.pop_front();

//         return;
//     }
//     int top()
//     {
//         return ll.front();
//     }
//     bool empty()
//     {
//         return ll.size() == 0;
//     }
// };
// int main()
// {
//     stack st;
//     st.push(2);
//     st.push(5);
//     st.push(1);
//     st.push(9);
//     st.push(3);
//     st.push(7);
//     while (st.empty() != true)
//     {
//         cout << st.top() << " ";
//         st.pop();
//     }
//     cout << endl;
//     return 0;
// }

//---------------------------------------------using STACK ---------------------------------------------

int main()
{
    stack<int> st;
    st.push(2);
    st.push(5);
    st.push(1);
    st.push(9);
    st.push(3);
    st.push(7);
    while (st.empty() != true)
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
    return 0;
}
