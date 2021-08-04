#include <iostream>

using namespace std;

int main() {

    float a, b, x;
    char opp;

    while (true) {
        cin >> a >> opp >> b;

        if ( opp == '/' && b == 0 ) {
            cout<<"Oops, cannot divide by zero"<<endl;
            continue;
        }
        switch ( opp ) {
            case '+':
                cout<< a+b << endl;
                break;
            case '-':
                cout<< a-b << endl;
                break;
            case '/':
                cout<< a/b << endl;
                break;
            case '*':
                cout<< a*b << endl;
                break;
            case '^':
                if ( b < 0 ) {
                    a /= a;
                    b *= -1;
                }

                x = 1;
                while ( b > 0 ) {
                    x *= a;
                    b--;
                }
                cout<< x << endl;
                break;
            default:
                cout<< "Invalid opperation"<<endl;
        
        }

        cout<< "Would you like to continue :-) ? ";
        cin>>opp;

        if ( opp == 'y' ) {
            break;
        }
    }

    return 0;
}