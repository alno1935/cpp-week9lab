#include <iostream>
using namespace std;

int main() {
    int students=10;
    int passes[10] = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,};
    int failures[10] = {-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,};
    int score;
    int counter=0; //intialising variables

        for (int tests=0; tests < students; ++tests) { //init test to 0, whenever test is less than students +1 to tests
        cout << "please enter the test scores \n";
        cin >> score; //user enters test scores
            
            if ( score >=50){ //if the score is greater than 50 added to the passes array
                passes[tests] = score;
            }
            else { //otherwise it is added to the failures array
                failures[tests] = score;
            }
        }
        cout << "the passes are \n";
        for(int pass : passes) { //itterates the entire passes array
            if (pass >=50){
                cout << pass <<endl; //displays all passing scores
                ++counter; //counter adds on everytime a student passes
            }
        }
        cout << "the fails are \n";
        for (int fail : failures){ //itterates the enntire falures array
            if (fail >=0){
                cout << fail <<endl; //displays all failed scores
            }
        }
        if (counter >=8) { //if the counter is greater then or equal to 8 the message plays
            cout << "\nraise the tuition!";
        }
    return 0;
}