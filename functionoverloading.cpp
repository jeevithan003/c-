#include<iostream>
#include<math.h>
#include<time.h>
#include<string>
using namespace std;
void pl(){
    cout<<"kickinf off"<<endl;
}
void pl(string t1, int ucl){
    cout<<"your tream is "<<t1<<" and thier ucl "<<ucl<<endl;
}
void pl(string t1,int ucl, int ballandor){
cout<<"your tream is "<<t1<<" and thier ucl "<<ucl<<" and  ballandoor in pl is "<<ballandor<<endl;
}


int main(){
//overloaded function in cpp

pl();
pl("mancherster_united",3);
pl("liverpool",7,0);


return 0;


}
