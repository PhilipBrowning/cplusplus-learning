#include <iostream>
using namespace std;
#include <list>

class YouTubeChannel {
private:
    string Name;
    int SubscribersCount;
    list<string> PublishedVideoTitles;
protected:
    // this will be acccessible in derived classes
    string OwnerName;
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

class CookingYouTubeChannel:public YouTubeChannel {
public:
	//constructor
	CookingYouTubeChannel(string name, string ownerName):YouTubeChannel(name, ownerName) {

	}
	void Practice() {
		cout<<OwnerName<<" is making cooking easy."<< endl;
	}
	
};

int main () {
    CookingYouTubeChannel cookingYtChannel("Yan can cook", "Yan");
    CookingYouTubeChannel cookingYtChannel2("Emerill's kitchen", "Emerill");
    cookingYtChannel.PublishVideo("Fried rice the easy way");
    cookingYtChannel.PublishVideo("Using a steamer");
    cookingYtChannel.GetInfo();
    cookingYtChannel.Practice();
    cookingYtChannel2.Practice();

}
