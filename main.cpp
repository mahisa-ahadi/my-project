#include<iostream>
#include<fstream>
using namespace std;
//function for fcfs

//function for sjf
//function for priority
int main(void){

    ifstream file("input.txt");
    if(!file){
        cout<<"file is not found"<<endl;
        return 1;
    }
     int x;
    while (file >> x) {   // reads integers until EOF
        cout << x << endl;
    }

    file.close();
    
return 0;
}
