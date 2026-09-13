#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

int main()
{
    string text = R"(do i wanna know ? 
if this feeling flows both ways , sad to see go 
was sortta hoping that you'd stayf)";

    for (char letter : text)
    {
        cout << letter << flush;

        this_thread::sleep_for(chrono::milliseconds(250));
    }

    cout << endl;

    return 0;
}