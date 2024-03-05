#include<iostream>
// #include<stack>
using namespace std;
#define size 5
class stac{
private:
int arr[size];
int top;
public:
stac(){

top=-1;
}
void push(int x){
if(top==x-1){
    cout<<"overflow"<<endl;
}
else{
    arr[top]=x;
    top=top+1;
}
}
int pop(){
    if(top==-1){
        cout<<"underflow"<<endl;
        return -1;

    }
    else{
        return arr[top];
        top=top-1;
    }
}
void seek(){
        for(int i=top-1;i<size;i--){
            cout<<arr[i]<<endl;
        }
    }


};

  
int main(){
    // stack<int>my;
    // my.push(13);
    // my.push(12);
    // int c=my.size();
    // cout<<c<<endl;
    stac s;
   s.push(7);
   s.push(13);
   s.push(45);
   s.push(46);
   cout<<s.pop()<<endl;
   s.seek();
return 0;
}