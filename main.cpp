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
 
 
 1) Write down the names of all of the primitives available in C++ (excluding wchar_t)
 put them here: 
 
 void
 int
 float
 double
 bool
 char 
 
2) for each primitive type, write out 3 variable declarations inside the variableDeclaration function.
    give each declaration an initial value
        just ignore wchar_t. you do not need to declare 3 variables of type 'wchar_t'
        'void' is a return type. you do not need to declare 3 variables of type 'void'.
    at the end of the function, pass each variable to the ignoreUnused function
 
3) write out 10 functions
    each declaration should have a random number of parameters in the function parameter list.
    add { ignoreUnused( ); } after each declaration in place of the closing semicolon
    pass each of your function parameters to the ignoreUnused function. 
    if your function returns something other than void, add 'return {};' at the end of it.
    
4) provide default values for an arbitrary number of parameters in the function parameter list.
    When naming your parameters, choose names that are relevant to the task implied by the function's name.
    
5) in the main function at the end: 
    for each of those functions declared, 
        a) write out how the function would look if called with correct arguments
        b) if the function returned anything, store it in a local variable via the 'auto' keyword.
        c) pass the local variable to ignoreUnused() as you did in variableDeclarations()
    see main() for an example of this.
 
 click the [run] button.  Clear up any errors or warnings as best you can.
 
 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
Make a pull request after you make your first commit and pin the pull request link to our DM thread.

send me a DM to check your pull request

 Wait for my code review.
 */

//2)
void variableDeclarations()
{
    //example:
    int number = 2; //declaration of a primitive named 'number' with an initial value of '2'
    int a = -1;
    int amount = 10;
    int position = 0;    

    float time = 12.15f;
    float height = 78.45f;
    float mass = 0.05f;

    double distance = 102349821039;
    double capacitance = 0.0000000001;
    double population = 10000000000;

    bool status = true;
    bool completed = false;
    bool verified = true;

    char letter = 'x';
    char firstInitial = 'W';
    char questionMark = '?';
    
    ignoreUnused(number, a, amount, position, time, height, mass, distance, capacitance, population, status, completed, verified, letter, firstInitial, questionMark); //passing each variable declared to the ignoreUnused() function
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
int countBpm(int beats, int time = 1)
{
    ignoreUnused(beats, time);
    return beats;
}
/*
 2)
 */
void triggerPulse(float startTime = 0, float duration = 0.5f)
{
    ignoreUnused(startTime, duration);
}
/*
 3)
 */
void drawButton(int positionX, int positionY, int size = 10)
{
    ignoreUnused(positionX, positionY, size);
}
/*
 4)
 */
bool powerOn()
{
    return true;
}
/*
 5)
 */
char playNote(char note, int octave, float noteDuration = 0.5f)
{
    ignoreUnused(note, octave, noteDuration);
    return note;
}
/*
 6)
 */
void testSpeaker(char typeOfNoise = 'w', int noiseDuration =5)
{
    ignoreUnused(typeOfNoise, noiseDuration);
}
/*
 7)
 */
bool saveProject(char projectName ='d', int numberOfFiles = 1)
{
    ignoreUnused(projectName, numberOfFiles);
    return true;
}
/*
 8)
 */
auto setGain(float level = -18, int channels = 2)
{
    ignoreUnused(level, channels);
    return level;
}
/*
 9)
 */
bool playChord(char note1, char note2, char note3, int chordDuration = 1)
{
    ignoreUnused(note1, note2, note3, chordDuration);
    return true;
}
/*
 10)
 */
float calculateTimeDelay(float bpm, float timeInMs = 60000.0f)
{
    ignoreUnused(bpm, timeInMs);
    return timeInMs/bpm;
}

int main()
{
    //example of calling that function, storing the value, and passing it to ignoreUnused at the end of main()
    auto carRented = rentACar(6, 2); 
    
    //1)
    int songBpm = countBpm(120);   
    //2)
    triggerPulse(5, 1.5);
    //3)
    drawButton(150, 90);
    //4)
    auto powerOnResult = powerOn();
    //5)
    char notePlayed = playNote('c', 3, 8);
    //6)
    testSpeaker();
    //7)
    auto projectSaved = saveProject('h', 1);
    //8)
    auto currentGain = setGain(-24, 1);
    //9)
    bool newChordPlayed = playChord('c', 'e', 'g');
    //10)
    float songTimeDelay = calculateTimeDelay(120);
    
    ignoreUnused(carRented, songBpm, powerOnResult, notePlayed, projectSaved, currentGain, newChordPlayed, songTimeDelay);
    std::cout << "good to go!" << std::endl;
    return 0;    
}
