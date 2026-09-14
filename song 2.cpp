#include <iostream>
#include <vector>
#include <string>
#include <thread>
#include <chrono>

using namespace std;

void animateText(const string& text, int speedMs) {
    for (char c : text) {
        cout << c << flush;
        this_thread::sleep_for(chrono::milliseconds(speedMs));
    }
    cout << endl;
}

int main() {
    vector<pair<string, int>> lyrics = {
        {"Wake up in the morning", 500},
        {"Everything's alright", 500},
        {"At the end of the story", 600},
        {"You're holdin' me tight", 500},
        {"I don't need to worry", 400},
        {"Am I out of my mind?", 500},
        {"And, oh, it's hard to see you", 800},
        {"But I wish you were right here", 600},
        {"Oh, it's hard to leave", 1000}
    };

    for (const auto& line : lyrics) {
        animateText(line.first, 60);
        this_thread::sleep_for(chrono::milliseconds(line.second));
    }

    return 0;
}

