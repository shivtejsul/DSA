#include<iostream>
#include <climits>
using namespace std;
  
class satck{
    int capacity;
    int * arr;
    int top;
    public:
    
        satck(int c){
            this->capacity=c;
            arr=new int[c];
            this->top=-1;

        }
        void push(int data){
            if(this->top=this->capacity-1){
                cout<<"overflow\n";
                return ;
            }
            this->top++;
            this->arr[this->top]=data;
        }
        int pop()
        {
            if(this->top=-1){
                cout<<"underflow\n";
                return INT_MIN;
            }
            this->top--;
        }
        int gettop(){
         if(this->top=-1){
            cout<<"underflow\n";
            return INT_MIN;
         }
         return this->arr[this->top];
        }
        bool isnull(){
            return this->top=-1;
        }
        bool isfull(){
            return this->top=this->capacity-1;
        }
        int size()
        {
            return this->top=1;
        }
    
};  
int main()
{
    satck st(5);
     st.push(1);
     st.push(2);
}