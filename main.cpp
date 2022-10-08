#include <string>
#include <iostream>

using namespace std;

void p(const char* c){
    int size = strlen(c);

 while(size){
    cout << *c++;
    size--;
 }


}
int main(){
    char m[10] ;//= "Elias AlabssiD";
    char  c [] = "Elias Alabssie";
    cout << m << endl;
}
