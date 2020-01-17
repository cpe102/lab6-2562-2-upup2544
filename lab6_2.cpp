#include <iostream>
#include <string> 
using namespace std;
int main(){
string name,movie,day,say;
int id;
cout<<"Fahsai: Sawadee ka...Can you tell me your name?"<<endl;
cout<<"?????:";
getline(cin,name);
cout<<"Fahsai: Wow!!! Luke Skywalker that is a really cool name."<<endl;
cout<<"Fahsai: I think you are Engineering student. What is your student ID?"<<endl;
cout<<name<<":";
cin>>id; 
id=id/10000000;
cout<<"Fahsai: I think you may be GEAR "<<id-12<<" I have a free movie tickets for you."<<endl; 
cin.ignore();
cout<<"Fahsai: Let's go to cinema together!!!"<<endl;
cout<<"Fahsai: What movie do you want to watch?"<<endl;
cout<<name<<":";
getline(cin,movie);
cout<<"Fahsai: So....which day are you free to go with me?"<<endl;
cout<<name<<":";
getline(cin,day);
cout<<"Fahsai: "<<day<<"....that is OK!!! I'm looking forward to watch "<<movie<<" with you."<<endl;
cout<<name<<":";
getline(cin,say);
cout<<"Fahsai: 555+ see you "<<day<<". Bye Bye \(^ ^)/ ";
}
