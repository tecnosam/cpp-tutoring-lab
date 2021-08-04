#include <iostream>

using namespace std;

int main() {
    int x;
    
    cin>>x;
    switch ( x ) {
        case 1:
            cout<<"one";
            break;
        case 2:
            cout<<"two";
            break;
        case 3:
            cout<<"three";
            break;
        case 4:
            cout<<"four";
            break;
        case 5:
            cout<<"five";
            break;
        case 6:
            cout<<"six";
            break;
        case 7:
            cout<<"eight";
            break;
        case 8:
            cout<<"eight";
            break;
        case 9:
            cout<<"nine";
            break;
        default:
            if ( x > 9 ){
                cout<<"Greater than 9";
            }
    }
    
    return 0;
}