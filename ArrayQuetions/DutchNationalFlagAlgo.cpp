#include <iostream>
#include <vector>
#include <string>
#include <windows.h>  // For Sleep and console control
using namespace std;

struct Video {
    int id;
    string title;
    string channel;
    int views;
    int duration; // in seconds
};

void clearScreen() {
    system("cls");
}

void loadingAnimation(const string& message, int durationMs) {
    const string loadingChars = "|/-\\";
    cout << message << " ";
    int count = durationMs / 200;  // update every 200 ms
    for (int i = 0; i < count; i++) {
        cout << "\b" << loadingChars[i % loadingChars.size()] << flush;
        Sleep(200);
    }
    cout << "\b \n"; // erase animation char and new line
}

void showVideoList(const vector<Video>& videos) {
    clearScreen();
    cout << "===== YouTube Clone =====\n";
    cout << "Available Videos:\n";
    for (const auto& v : videos) {
        cout << v.id << ". " << v.title << " | " << v.channel << " | "
             << v.views << " views | Duration: " << v.duration / 60 << "m " << v.duration % 60 << "s\n";
    }
    cout << "Select a video ID to play or 0 to exit:\n";
}

void playVideo(const Video& v) {
    clearScreen();
    cout << "\nNow Playing: " << v.title << "\n";
    cout << "Channel: " << v.channel << "\n";
    cout << "Views: " << v.views << "\n";
    cout << "Duration: " << v.duration / 60 << " minutes " << v.duration % 60 << " seconds\n\n";

    loadingAnimation("Loading video", 3000);

    cout << "Playing video... (Press Enter to stop)\n";
    cin.ignore(); // consume leftover newline
    cin.get();
    cout << "Video stopped.\n";
    Sleep(1000);  // pause before returning to list
}

int main() {
    vector<Video> videos = {
        {1, "Learn C++ in 10 Minutes", "CodeAcademy", 1500000, 600},
        {2, "Funny Cat Compilation", "CatsWorld", 23000000, 300},
        {3, "Top 10 Travel Destinations", "TravelGuru", 8700000, 900},
        {4, "Motivational Speech 2025", "InspireDaily", 12500000, 1200}
    };

    while (true) {
        showVideoList(videos);

        int choice;
        cin >> choice;

        if (choice == 0) {
            cout << "Exiting YouTube Clone. Bye!\n";
            break;
        }

        bool found = false;
        for (const auto& v : videos) {
            if (v.id == choice) {
                playVideo(v);
                found = true;
                break;
            }
        }
        if (!found) {
            cout << "Invalid video ID. Try again.\n";
            Sleep(1500);
        }
    }

    return 0;
}
