#include <bits/stdc++.h>
using namespace std;

int main(){

    int space = 1;
    int dice_number = 0;

    
    while (space<100){


        cin >> dice_number;
        space = space + dice_number;
        if (dice_number == 0) { 
          printf("%s\n", "You Quit!");
          return 0;
    }
        if (space==54){
            space=19;
            cout << "You are now on square " << space <<endl;
        }

        else if (space==90){
            space=48;
            cout << "You are now on square " << space <<endl;
        }

        else if (space==99){
            space=77;
            cout << "You are now on square " << space <<endl;
        }

        else if (space==9){
            space=34;
            cout << "You are now on square " << space <<endl;
        }

        else if (space==40){
            space=64;
            cout << "You are now on square " << space <<endl;
        }

        else if (space==67){
            space=86;
            cout << "You are now on square " << space <<endl;
        }

        else if (space>100){
            space = space - dice_number;
            cout << "You are now on square " << space <<endl;
        }

        else{
        cout << "You are now on square " << space <<endl;
        }
    


    }

    cout<< "You Win!";

    return 0;
}