#include <iostream>
using namespace std;

int main(){

   int total=0;
   char input;
   cin>> input;

   int count=0;

   while(input !='!'){
    total=total+(int(input-96));
    count++;
        if(total>100){
            cout<<"Too Many"<<endl;
            cout<<count<<endl;
            return 0;
        }
    cin>>input;
   }
   cout<<total<<endl;
}