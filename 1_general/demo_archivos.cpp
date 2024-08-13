
#include <iostream>
#include <string>
#include <fstream>
#include <time.h>
using namespace std;

class Par{
    public:
        int x;
        int y;

        Par(){
            x = 0;
            y = 0;
        }

        Par(int a, int b){
            x = a;
            y = b;
        }

        void print(){
            cout << x << endl;
            cout << y << endl;
        }
};


void write(Par* arr, int n){
    ofstream archivo("output.bin",ios::binary);
    archivo.write((char*) arr, sizeof(Par)*n);
    archivo.close();
}

Par* read(string file_name, int n){
    ifstream archivo2(file_name,ios::binary);
    Par* new_arr = new Par[n];
    archivo2.read((char*) new_arr, sizeof(Par)*n);
    return new_arr;
}

int main(){

    srand(time(NULL));
    Par* arr = new Par[100];

    for(int i = 0; i < 100; i++){
        arr[i].x = rand() % 10;
        arr[i].y = rand() % 10;
    }

    write(arr,100);
    Par* new_arr = read("output.bin",100);

    cout << new_arr[0].x << " " << new_arr[0].y << endl;

    for(int i = 0; i < 100; i++){
        cout << new_arr[i].x << endl;
    }

}
