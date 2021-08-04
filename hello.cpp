#include <iostream>
#include <fstream>

using namespace std;

int main() {

    ofstream file_stream( "mytext.txt" );
    int a;

    cout<<"Hlow old are you chap: ";
    cin>>a;

    file_stream<<"Hello Steve\n"<<"You're "<<a<<" years old";

    return 0;
}