#include <iostream>

using namespace std;

int main()
{
    double inp1;
    double inp2;
    string operation;
    double answer;

    cout <<"input No 1:";
    cin >> inp1;
    cout <<"input No 2:";
    cin >> inp2;
    cout <<"what you want to do with it chose one of these:-,+,/ and * :";
    cin >>operation;
    if(operation == "+"){
    answer = inp1 + inp2;
    }
    else if(operation == "-"){
    answer = inp1 - inp2;
    }
    else if(operation == "/"){
    answer = inp1 / inp2;
    }
    else if(operation == "*"){
    answer = inp1 * inp2;
    }
    else{
        cout <<"Invalid Operation";
    }


    cout <<"the answer is " << answer;
    return 0;
}
