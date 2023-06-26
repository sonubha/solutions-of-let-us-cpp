#include<bits/stdc++.h>
using namespace std;
 
 string Tostring(int n1){
    string string1=to_string(n1);
    cout<<"data type of string1 is: "<<typeid(string1).name()<<endl;
    return  string1;

 }
string Tostring(float n2){
    string string2=to_string(n2);
    cout<<"data type of string1 is: "<<typeid(string2).name()<<endl;

  return string2;

}


int main() {

    int i=10;
    cout<<"data type of i string1 is: "<<typeid(i).name()<<endl;
    float f=3.14;
    cout<<"data type of f is: "<<typeid(f).name()<<endl;
    Tostring(i);
    Tostring(f);



return 0;
}