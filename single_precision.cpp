#include <iostream>
#include <math.h>
#include <stack>
#include <vector>
using namespace std;

int exp_binary(int num, stack<int>& eval)
{
    int rem;
    if (num==0) {
        goto label;
    }
    else
    {
        rem = num%2;
        num = num/2;
        eval.push(rem);
        exp_binary(num,eval);
    }
label:
    return 0;
}

int binary(int num, stack<int>& st_front)
{
    int rem;
    if (num==0) {
        goto label;
    }
    else
    {
        rem = num%2;
        num = num/2;
        st_front.push(rem);
        binary(num,st_front);
    }
label:
    return 0;
}

int binary_fraction(double num, vector<int>& st_rear)
{
    if(num==1)
    {
        goto label;
    }
    else
    {
        num=num*2;
        if (num>1)
        {
            st_rear.push_back(1);
            num=num-1;
            binary_fraction(num, st_rear);
        }
        else if (num==1)
        {
            st_rear.push_back(1);
            goto label;
        }
        else{
            st_rear.push_back(0);
            binary_fraction(num, st_rear);
        }
    }
label:
    return 0;
}

int main()
{
    cout<<"Enter your number: ";
    bool sign;
    int exp = 0;
    unsigned short int count = 0;
    stack<int> st_front;
    vector<int> st_rear;
    stack<int> eval;
    double n,val;
    cin>>n;
    if (n<0) {
        val = n*(-1);
    }
    else{
        val = n;
    }
    
    if (n<0) {
        sign = true;
    }
    else{
        sign = false;
    }
    
    int front = floor(val);
    binary(front,st_front);
    
    int size = (int) st_front.size();
    
    double rear = val - front;
    binary_fraction(rear,st_rear);
    
    if (val>=1) {
        exp = 126 + size;
        exp_binary(exp,eval);
    }
    else if(val>0 && val<1)
    {
        for (int i=0; i<st_rear.size(); i++)
        {
            if(st_rear[i] == 1)
            {
                count++;
                break;
            }
            count++;
        }
        count = 127 - count;
        exp_binary(count,eval);
    }
    
    int eval_size = (int) eval.size();
    
    cout<<"\nRESULTS: \n\n";
    if (sign==true) {
        cout<<"SIGN: 1 \n";
    }
    else{
        cout<<"SIGN: 0 \n";
    }
    
    cout<<"EVAL: ";
    for (int i=0; i<eval_size; i++) {
        int item = eval.top();
        cout<<item;
        eval.pop();
    }
    cout<<"\n";
    
    cout<<"FRACTION: ";
    if (count==0)
    {
        st_front.pop();
        int size = (int) st_front.size();
        int size_rear = (int) st_rear.size();
        
        if (size==0) {
            size_rear = 23;
        }
        else{
            size_rear = 23 - size;
        }
        for (int i=0; i<size; i++) {
            int item = st_front.top();
            cout<<item;
            st_front.pop();
        }
        for (int i=0; i<size_rear; i++)
        {
            cout<<st_rear[i];
        }
    }

    return 0;
}
