#include <iostream>
using namespace std;
#include <list>

class YouTubeChannel {
public:
    string Name;
    string OwnerName;
    int SubscribersCount;
    list<string> PublishedVideoTitles;
};

int main () {

    YouTubeChannel ytChannel;
    ytChannel.Name = "Test channel";
    ytChannel.OwnerName = "Me";
    ytChannel.SubscribersCount = 2000;
    ytChannel.PublishedVideoTitles = {"cooking 101", "playing games", "CSS coding"};

    cout << "Name: " << ytChannel.Name << endl;
    cout << "OwnerName: " << ytChannel.OwnerName << endl;
    cout << "SubscriberCount: " << ytChannel.SubscribersCount << endl;
    cout << "Videos:" << endl;
    
    for (string videoTitle : ytChannel.PublishedVideoTitles) {
        cout << videoTitle << endl;
    }
}
