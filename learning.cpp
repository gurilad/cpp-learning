#include <iostream> //include is to import libarys
#include <string> //so we have string variables 
#include <tuple>
#include <vector>
#include <map>
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
int switchStatments(){
    /*
    if you find yourself using too much if and else-if statements you would like to *switch* to switch statements,
    switch statements are baisicly an easier and cleaner ways of doing else-if, let me show you an example of a switch
    */
    string day = "tuesday"; //setting a variable
    switch (day == "tuesday"){//checking if its tuesday
        case true: //if it is true we do the next thing:
            cout << "yes it is tuesday :) \n"; //sending a message that it is true
            break; //make sure to breake after the end of each case other then the last one, if you dont it will just keep sending the ones after the correct one
        case false:
            cout << "why you lying, no it isnt >:( \n";
    }
    //lets do another example
    int x = 5;
    switch(x + 1){ //if the answer of x(5) + 1 is equal to one of these
        case 3:
            cout << "answer is 3!! \n";
            break;
        case 9:
            cout << "ITS 9!! \n";
            break;
        case 6:
            cout << "actually the answer is 6 \n";
            break;
        case 10:
            cout << "nah idk what yall thinkin bout but its actually 10 \n";
            break;
        default: //defult is if none of the options are correct then the code in the default will be activated
            cout << "idk \n";
    }

    return 0;
}
int refrences(){
    /*
    refrences also knows as alises are used to refrence variable via a diffrent name then their actuall set name
    to create a refrence/alise we do the next thing
    */
    int a = 0; //the normal named variable
    int &b = a; //the "&" tells the program that its a diffrent name to it rather then creating a new variable that has the value of variable a
    //this means we can use b to modify var a
    //this is just a simple thing that is nice to know i guess
    cout << a << endl;
    cout << b << endl;
    a = 5; //changin only a
    cout << a << endl;
    cout << b << endl;
    b = 10; //changin only b
    cout << a << endl;
    cout << b << endl;
    //as you will see they print out the same values
    //this can be usfull for accessing info from a variable in a diffrent function
    return 0;
}
int tuples(){//good luck pronouncing this without anyone getting mad
    /*
    if you look at the top you will see we need to import the libary for tuples
    a touple is baisicly an array but instead of having to hold the same type the objects inside of it can be any type that you want
    but it does a have a diffrent way to access elements 

    you do still have to specify what types will be in the tuple tho as you will see how to create a tuple under here
    */
    tuple <int, string, char> nameTU(69,"heh nice", 'e'); //whatever is inside the "()" is the values of the tuple, so thats how you can create a tuple
    //you can also create an empty tuple like so:
    tuple <int, string> AgeName;
    AgeName = make_tuple(23, "name"); //to set a value that isnt set yet of a tuple we use the make_tuple function
    //lets now get values from these tuples to do so we do like this:
    cout << get<0>(nameTU) << endl; //we are printing the first value in the touple, as you see a tuple starts with the index 0 as for most things 
    //we can also change the value of them with that
    get<0>(nameTU) = 420;
    cout << get<0>(nameTU) << endl;
    //tuples have methods that is named swap so lets give an example of that
    tuple <int, int> nm1(1,2);
    tuple <int, int> nm2(6,9);
    nm1.swap(nm2);
    //we can also break the tuple down to their own variables by using the tie function
    int x, y; //declaring x and y as both integers
    tie(x, y) = nm1;
    return 0;
    //we can combine 2 tuples by using the tuple_cat function which i will now give an example of:
    tuple_cat(nm1, nm2);
    //be aware that if you make this a variable you will have to specify the types still for example
    tuple <int, int, int, int> np3 = tuple_cat(nm1, nm2);
    //if you do "tuple np3 = tuple_cat(nm1,nm2)" it will not work and will give you an error
    //but you can use the auto thing of c++, what auto does is baisicly guess what the variable type is acording to its contenents like so
    auto nm3 = tuple_cat(nm1, nm2); //be curfull with this, it can cause errors and problems in the feauture
    return 0;
}
int maps(){
    /*
    a map allows us to access elements based on unique keys not with indexes.
    not really gonna explain maps very far because it is very complicated to explain, just look at the tutorial thru the sources in the 
    wiki tab of the github. i am gonna say you need to includ the map libary
    */
    map<char, int> mp = {
        {'T', 7},
        {'S', 8},
        {'a', 4}
    };
    cout << mp['S'] << endl; //this is why its easier to find elements in maps then in an array. warning: it is key sensetive
    //to add to a map:
    mp['u'] = 6;
    //another way to add is:
    mp.insert(pair<char, int>('f', 5) );
    //can also create a pair on its own by making it a var so like so:
    pair<char, int> namePR('j',3);
    mp.insert(namePR);
    //to clear a map we can use the clear method
    //mp.clear(); commented cause i dont wanna clear mine 
    //or to check if a map is empty
    mp.empty(); //1 if its empty 0 if its not
    //to get size/length of a map
    mp.size();
    return 0;
}
int pointers(){
    /*
    **IMPORTANT**
    pointers are to save locations of variable.
    every variable has its on location in our computers memory for example:
    if we set a variable for example x we create a location in our computers memory
    lets say at (random)ox07Jl that contains the value of value of x saved as x.
    when we create an alise/refrence we are using a diffrent variable to access the same memory spot
    meaning if we change x to a diffrent value y will also change to that value (the location stays the same), and so goes the other way
    so then if we change the other variable leading to the same location it will change it for x as well.
    what a pointer does is it stores the location of a variable, to create a pointer to x for example lets save the location of x as z.
    int *z = &x; the value of that will have its own location but the value of that location is the location of x
    lets start with some code examples
    */
    int x = 2;
    int *y = &x;
    cout << x << endl;
    cout << y << endl;
    //then to access the value of the location of y we do this
    cout << *y << endl;

    //pointers with arrays
    int e[] = {1, 2, 3};
    int *head = e; //arrays are already strored as their location so by doing this i get the location of the first element
    //note: you can still use normal index with this like so:
    // int *head = &e[1]; //this will set head to the location of the second value

    //lets get this array with only the location of it
    for(int i = 0; i < 3; i++){
        head = e + i;
        cout << head << endl;//prints location of all the arrays contained objects
        

    }
    for(int i = 0; i < 3; i++){
        head = e + i;
        cout << *head << endl;//prints value of all arrays contained objects
        

    }
    return 0;
}
int main(){ //creating a function 
    sendMsg();
    variables();
    userInput();
    forLoops();
    arrays();
    whileLoops();
    switchStatments();
    refrences();
    tuples();
    maps();
    pointers();
    //in the main function we dont need a return line
}


/*
to compile code for the first time we go to the diractory where the program is in the cmd and type "g++ -o (name of exe) (name of file with .cpp)"
then to run it just type the name of the executable we just made in the cmd

to recompile just run the same command again with the **same name**
then you can run it again
*/
