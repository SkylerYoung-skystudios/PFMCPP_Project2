#include <iostream>

template<typename ...T>
void ignoreUnused(T&&...) { }

/*
Project 2 - Part 1 / 1
video: Chapter 2 - Part 3
 Declarations Tasks

 Create a branch named Part1

 Purpose:  This project will teach you how to declare variables and free functions.  
 This will be the first project where the code you write will be compiled and you will be responsible for making sure it compiles before submitting it for review.
 
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t) here: 
 
 int 
 float
 bool
 double
 char
 void
 

 
 
 
 
 
 
 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration() function on line 59.
    a) give each variable declaration an initial value
        - just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        - 'void' is a return type. you do not need to declare 3 variables of type 'void'.
    b) at the end of the function, call ignoreUnused once and pass all of your variables to it. see line 71 for an example
 
3) write out 10 functions
    a) each declaration should have a random number of parameters in the function parameter list.
        When naming your parameters, choose names that are relevant to the task implied by the function's name.
    b) add { ignoreUnused( ); } after each declaration in place of the closing semicolon
    c) pass each of your function parameters to the ignoreUnused function like you did in 2b)
    d) if your function returns something other than void, add 'return {};' at the end of it.
    
4) provide default values for an arbitrary number of parameters in the function parameter list.
    
5) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variables to ignoreUnused() as you did in 2b)
    see main() for an example of this.
 
 6) click the [run] button.  Clear up any errors or warnings as best you can.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a primitive named 'number' with an initial value of '2'
    
    int speed = 45;
    int size = 93;
    int time = 32;

    float length = 35.55;
    float duration = 23.9;
    float width = 873.3; 

    bool tie = false;
    bool hard = true;
    bool completed = false;
    
    double rotation = 24333.2342242;
    double momentum = 6532.234;
    double amount = -8624982.44423232342342;

    char name = 'e';
    char middleInitial = 'c';
    char letter = 'r';
    
    ignoreUnused(number, speed, size, time, length, duration, width, tie, hard, completed, rotation, momentum, amount, name, middleInitial, letter); //passing each variable declared to the ignoreUnused() function
}

/*
 10 functions
 example:
 */
bool rentACar(int rentalDuration, int carType = 0)  //function declaration with random number of arguments, arbitrary number of arguments have default value
{ 
    ignoreUnused(rentalDuration, carType); //passing each function parameter to the ignoreUnused() function
    return {}; //if your function returns something other than void, add 'return {};' at the end of it.
} 

/*
 1)
 */
float waveLength (bool polarity, float peak)
{
    ignoreUnused(polarity, peak);
    return {};
}
/*
 2)
 */
 int notes (int octaves = 4, bool chromatic = true)
{
    ignoreUnused(octaves, chromatic);
    return {};
}

/*
 3)
 */
 bool noteOn (int midiTrigger, int velocity, int source, int channels, bool voices = 24)
{
    ignoreUnused(midiTrigger, velocity, source, channels, voices);
    return {};
}

/*
 4)
 */
 int volume (bool mono, float spl, float distance)
{
    ignoreUnused(mono, spl, distance);
    return {};
}

/*
 5)
 */
 void push (int parameter)
{
    ignoreUnused(parameter);
}
/*
 6)
 */
 double sampleTime (int channel, char file, char name )
{
    ignoreUnused(channel, file, name);
    return {};
}
/*
 7)
 */
int mix (int amount, int dryVolume = 0, int wetVolume = 0)
{
    ignoreUnused(amount, dryVolume, wetVolume);
    return {};
}
/*
 8)
 */
 double topFrequency (double samplelratetime)
{
    ignoreUnused(samplelratetime);
    return {};
}
/*
 9)
 */
 void mute (double input, double output = 0)
{
    ignoreUnused(input, output);
}
/*
 10)
 */
 int sleepRequired (int age, int weight, bool male = true)
{
    ignoreUnused(age, weight, male );
    return {};
}
/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    auto snare = waveLength(true, 23.44);
    //2)
    auto synth = notes(2, true);
    //3)
    auto input = noteOn(34, 108, 2, 2, 6);
    //4)
    auto vocals = volume(true, 355.44, 23);
    //5)
    push(2);
    //6)
    auto length = sampleTime (2, 'd', 'r');
    //7)
    auto reverbAmount = mix(20,-5);
    //8)
    auto filter = topFrequency(44);
    //9)
    mute(4);
    //10)
    auto mysleep = sleepRequired(24, 160);
    
    ignoreUnused(carRented, snare, synth, input, vocals, length,reverbAmount, filter, mysleep);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
