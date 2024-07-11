#include <iostream>

using namespace std;

string classes[] = {"","","","","","","","","",""};
string objects[] = {"","","","","","","","","",""};
int la = 0;
string bools = "false";
string bools2 = "false";
string do_class_exists(string className){
    for(int i=0;i!=10;i++){
        if(classes[i] == className){
            bools = "true";
        }
    return bools;
}
}
string do_object_exists(string objectName){
    for(int i=0;i!=10;i++){
        if(objects[i] == objectName){
            bools2 = "true";
        }
    return bools2;
}
}
class book {
public:
    int pages;

    book(string name){
        classes[la] = "book";
        objects[la] = name;
        la = la + 1;
    }
 };
int main()
{
    book mybook("mybook");
    cout << do_class_exists("book") << endl;
    cout << do_object_exists("mybook") << endl;
    return 0;
}
