#include <iostream>
using namespace std;
#include <list>

class YouTubeChannel {
private:
    string Name;
    string OwnerName;
    int SubscribersCount;
    list<string> PublishedVideoTitles;
public:
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

    void Subscribe() {
	    SubscribersCount++;
    }
    void Unsubscribe() {
	    if (SubscribersCount > 0)
	        SubscribersCount--;
    }
    void PublishVideo(string title) {
	    PublishedVideoTitles.push_back(title);
    }


};

int main () {

    YouTubeChannel ytChannel("Test channel", "Me");
    ytChannel.PublishVideo("testvideo1");
    ytChannel.PublishVideo("testvideo2");
    ytChannel.PublishVideo("testvideo3");
    ytChannel.Subscribe();
    ytChannel.Subscribe();
    ytChannel.Subscribe();

    ytChannel.GetInfo();


    YouTubeChannel ytChannel2("Dog shows", "Bob");
    ytChannel2.GetInfo();
}
