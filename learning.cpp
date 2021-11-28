#include <iostream> //include is to import libarys
#include <string> //so we have string variables 
using namespace std; //so we dont have to do std:: after every line


//make sure to end every line with a semicolen (;)


int sendMsg(){
    cout << "Hello World!" << " smth"; //printing a string, we can add more to a string by doing another "<<" just like in the example
    return 0;
}
int variables() {
    string sentece = "sex";//sentence or word
    int wholeNumber = 420; //whole number
    float unWholeNumber = 6.9; //number(isnt whole)
    double weirdFloat = 6.94206969420; //same as float but can store more number
    bool trfa = true; //true or false
    char notUsable = 'e'; //1 character (probably wont be used)
    const int unchange = 5; //creates a variable that can not be changed using the const keyword
    cout << sentece << "\n" << wholeNumber << "\n" << unWholeNumber << "\n" << weirdFloat << "\n" << trfa << "\n" << notUsable << "\n" << unchange << "\n";
     
    return 0;
}
int userInput(){
    string UsIn; //where the output is stored
    cin >> UsIn; //getting input from user
    cout << UsIn << "\n"; //sending out the input
    cout << cin.fail(); // if this returns 0 it worked fine and if it returns 1 it failed
    cin.clear(); //clears error flags 
    return 0;
}
int arrays(){
    /*
    to create an array we want to specify the type of the arrays objects so string int and so on then name with [] at the end
    inside of them you put the amount of objects that will be inside the array.

    to determen whats inside the array we use curly braces ({}) and inside the objects separeted by a comma (,)
    for example:
    */
   string name[10] = {"in1","in2","in3","in4","in5", "in6", "in7", "in8", "in9", "in10"};
   string eep[4] = {"a", "boooom", "booooooooooooooooooom", "boooooooooooooooom"};
   //to print everything we will have to do the following:
   for(int i = 0; i < sizeof(eep)/sizeof(eep[0]); i++){ //we use the sizeof(name)/sizeof(name[0]) to get the size/length of the array
       cout << ", " << eep[i];
   }
   return 0;
}

int main(){ //creating a function 
    sendMsg();
    variables();
    userInput();
    arrays();
    //in the main function we dont need a return line
}


/*
to compile code for the first time we go to the diractory where the program is in the cmd and type "g++ -o (name of exe) (name of file with .cpp)"
then to run it just type the name of the executable we just made in the cmd

to recompile just run the same command again with the **same name**
then you can run it again
*/