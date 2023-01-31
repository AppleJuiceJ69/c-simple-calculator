#include <iostream>
#include <cmath>


using namespace std;
// two problems, we want to restart when we type something. Also we want to add an if statemnt just in case they don't type in the right operator. // Also if they type in something other than a number than we want to return an error, and keep looping through or we can restart.
// funny error where when we type in a string instead of a number it just writes a giant ass error that keeps going.
int main(){
    //initializing variables;
    double number;
    double number2;
    char op;
    string startOver = "restart";
    int loop = 1;
    int restart = false;
    for(int i = 0; i < loop; i++){

    // user input;
    cout << "enter a number: ";
    cin >> number;
    cout << "enter another number: ";
    cin >> number2;
    cout << "enter an operator: choices (+,-,*,/): ";
    cin >> op;
    
     // return the answer;
    switch(op){
        case '+':
        cout << number + number << endl;
        break;
        case '*':
        cout << number * number << endl;
        break;
        case '-':
        cout << number - number << endl;
        break;
        case '/':
        cout << number / number << endl;
    }
     //Startover or not.
       cout << "type restart, else type anything to exit: " ;
    cin >> startOver;

   
    //if check to restart once done, or restart if we type in
   if(startOver == "restart"){
        restart = true;
   }
   else{
        restart = false;
   }
  
     if(restart == true){
            loop += 1;
    }
    else{
        loop = 1;
    }
    }
   
}

