#include<iostream>
using namespace std;
int arr[5],top=-1;
void push()
{
    int no;
    cout<<"Enter there value:"<<endl ;
    cin>>no;
    top++;
    if(top==4)
    {
        cout<<"overflow"<<endl;
    }
    else
    {
        arr[top]=no;
    }
}
void pop()
{
    if(top==-1)
    {
        cout<<"underflow"<<endl;
    }
    else
    {
      top--;
    }

}
void search()
{
    if(top==-1)
    {
        cout<<"underflow"<<endl;
    }
    else
    {
      for(int i=0;i<=top;i++)
      {
        cout<<arr[i]<<"\t";
      }
      cout<<endl;
    }
}
int main()
{  
     int ch;
 do{
    cout<<"Choice  condition \n 1)push 2)pop 3)searching 4)exit\n";
    cin>>ch;
    switch(ch)
    {
        case 1:
                push();
                break;
        case 2:
                pop();
                break;
        case 3:
                search();
                break;
        case 4:
              cout<<"exit"<<endl;
                break;
        default:
            cout<<"Invaliad choice"<<endl;
    }
 }while(ch!=4);
    
 return 0;
}