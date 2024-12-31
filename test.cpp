#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ofstream file("text0.txt");
    for(int i = 0; i < 22 ; i++){
        for(int j = 0; j < 63 ; j++){
          if (i == 0){
            if (j == 0) file << "|";
            else if (j < 62) file << "_";
            else file << "|" << endl;
          }
          else if ((i > 0) and (i < 22)){
            if (j == 0) file << "|";
            else if (j == 62) file << " " << endl;
            else if ((j % 2) == 0) file << "|";
            else file << "__";
          }
        }
    }
    file.close();
}