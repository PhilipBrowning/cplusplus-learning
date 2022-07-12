#include <iostream>
using namespace std;
#include <list>

class YouTubeChannel {
public:
    string Name;
    string OwnerName;
    int SubscribersCount;
    list<string> PublishedVideoTitles;

    YouTubeChannel(string name, string ownerName) {
	    Name = name;
	    OwnerName = ownerName;
            SubscribersCount = 0;
    }

    void GetInfo() {
        cout << "Name: " << Name << endl;
        cout << "OwnerName: " << OwnerName << endl;
        cout << "SubscriberCount: " << SubscribersCount << endl;
        cout << "Videos:" << endl;
        
        for (string videoTitle : PublishedVideoTitles) {
            cout << videoTitle << endl;
        }

    }
};

int main () {

    YouTubeChannel ytChannel("Test channel", "Me");
    ytChannel.PublishedVideoTitles.push_back("testvideo1");
    ytChannel.PublishedVideoTitles.push_back("testvideo2");
    ytChannel.PublishedVideoTitles.push_back("testvideo3");

    ytChannel.GetInfo();


    YouTubeChannel ytChannel2("Dog shows", "Bob");
    ytChannel2.GetInfo();
}
