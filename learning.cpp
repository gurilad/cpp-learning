#include <iostream> //include is to import libarys
#include <string> //so we have string variables 
using namespace std; //so we dont have to do std:: after every line


//make sure to end every line with a semicolen (;)
//this will be tought with comments and comments are written started with // and then you can wright whatever with no error

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
int forLoops(){
    /*
    to create a for loop we will create a variable with the value of 0 **inside the loop** then while it is <= or what ever u want to a number
    then everytime that its still true we run the code and add one to the value we created at the start and run it,
    might sound complicated but i will now give an example with sending a message 10 times: 
    */
   for(int i = 0; i <= 9; i++){  //int i = 0; sets i as an integer number with the number 0, then i <= 9 checks if i is still smaller or equal to 9 (cause i starts from zero so it gues 0 1 2...), the i++ just adds 1 to i so it doesnt go forever
        cout << "message "; //this will send "message " while i is smaller or equal to 10, there will only be one space and no new line between every message
        if(i == 9){ //checking if i is equal to 10 to create a new line at the end of the last message
            cout << "\n"; //creating a new line
        }
   }
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

   //to print everything we will have to do the following:
   for(int i = 0; i < sizeof(name)/sizeof(name[0]); i++){ //we use the sizeof(name)/sizeof(name[0]) to get the size/length of the array
       cout << ", " << name[i];
   }
   return 0;
}
int whileLoops(){
    /*
    a while loop is baiscly a for loop but a little more simple, a while loop is a for loop but without being able to use i, so i cant do what
    i did in the for loops where in the end i added a new line, a while loop take a question just like the 2nd input for a for loop and runs the 
    code-block inside of it untill the question/boolean is true lets do the same example as we did with the for loop but with while loops 
    */
    int i = 0; //creating a var to keep track of how many loops we did
    while(i <= 10){ //checking if i is smaller or equal to 10
       cout << i << endl; //printing then ending the line
       i++; //adding 1 to i.
    }
    //cangruts if you did this, you just make a for loop with a while loop, lets create something somewhat usfull:
    //for the next example i will create an input that takes a number and if its 1 or 2 they can continue but if it is not we will loop around and ask them to enter again
    int input = -1; //setting a variable equal to -1 when there is no user input the the loop to run
    while (input != 1 && input != 2){ //checking if input is 1 or 2
       cout << "Type a number 1 or 2: "; //telling the user to input 1 or 2
        cin >> input; //getting the input
    } //this will run for the first time cause at the start input is not 1 or 2
    return 0;
}

int main(){ //creating a function 
    sendMsg();
    variables();
    userInput();
    forLoops();
    arrays();
    whileLoops();
    //in the main function we dont need a return line
}


/*
to compile code for the first time we go to the diractory where the program is in the cmd and type "g++ -o (name of exe) (name of file with .cpp)"
then to run it just type the name of the executable we just made in the cmd

to recompile just run the same command again with the **same name**
then you can run it again
*/
