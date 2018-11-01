#include <iostream>
using namespace std;

int main() {
    int students=10;
    int passes[10] = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,};
    int failures[10] = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,};
    int score;
    int counter=0;

        for (int tests=0; tests < students; ++tests) {
        cout << "please enter the test scores \n";
        cin >> score;
            
            if ( score >=50){
                passes[tests] = score;
            }
            else {
                failures[tests] = score;
            }
        }
        cout << "the passes are \n";
        for(int pass : passes) {
            if (pass >=50){
                cout << pass <<endl;
                ++counter;
            }
        }
        cout << "the fails are \n";
        for (int fail : failures){
            if (fail >=0){
                cout << fail <<endl;
            }
        }
        if (counter >=8) {
            cout << "\nraise the tuition!";
        }
    return 0;
}