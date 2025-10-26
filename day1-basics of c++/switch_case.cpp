#include<iostream>
using namespace std;
int main(){
int day;
cin>>day;
switch(day){
    case 1 : 
    cout<<"monday"<<endl;
    break;
    case 2 :
    cout << "tuesday"<<endl;
    case 3 :
    cout << "wednesday"<<endl;
    case 4: 
    cout << "thursday"<<endl ;
    default : 
    cout << "thank you"<<endl;
}
return 0;
}