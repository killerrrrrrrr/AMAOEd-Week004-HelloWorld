#include <iostream>
#include <list>

using namespace std;

class YoutubeChannel {

    public:

    string Name;
    string OwnerName;
    int SunscribersCount;
    list<string> PublishedVideoTitles;

    // Adding Constructor Function
    YoutubeChannel (string name, string ownerName) {
        Name = name;
        OwnerName = ownerName;
        SunscribersCount = 0;
    }

    // Adding Method 
    void GetInfo() {
        cout << "Name: " << Name << endl;
        cout << "OwnerName: " << OwnerName << endl;
        cout << "SunscribersCount: " << SunscribersCount << endl;
        cout << "Videos: " << endl;
        for(string videoTitle: PublishedVideoTitles) {
            cout << videoTitle << endl;
    }

    }

};

int main()
{
    // Invoking with constructor and parameter
    YoutubeChannel ytChannel("Killer","Sheena");
    // Adding additional properties with parameter (aside from the constructor)
    ytChannel.PublishedVideoTitles.push_back("C++ for beginners Video 1");
    ytChannel.PublishedVideoTitles.push_back("HTML & CSS for beginners");
    ytChannel.PublishedVideoTitles.push_back("C++ OOP");


    YoutubeChannel ytChannel2("AmySings", "Amy");

    // Invoking with Method
    ytChannel.GetInfo();
    ytChannel2.GetInfo();


    // --------------------------------------
    // INVOKING WITHOUT CONSTRUCTOR

    // YoutubeChannel ytChannel();
    // ytChannel.Name = "Killer";
    // ytChannel.OwnerName = "Sheena";
    // ytChannel.SunscribersCount = 2;
    // ytChannel.PublishedVideoTitles = {
    //     "C++ for beginners Video 1",
    //     "HTML & CSS Video 1",
    //     "C++ OOP Video 1"
    // };

    // --------------------------------------
    // PRINTING WITHOUT METHOD YET

    // cout << "Name: " << ytChannel.Name << endl;
    // cout << "OwnerName: " << ytChannel.OwnerName << endl;
    // cout << "SunscribersCount: " << ytChannel.SunscribersCount << endl;
    // cout << "Videos: " << endl;
    // for(string videoTitle: ytChannel.PublishedVideoTitles) {
    //     cout << videoTitle << endl;
    // }


    system("pause>0");
};


// Continue here ----> https://www.youtube.com/watch?v=a8ZB-TPB6EU&list=PL43pGnjiVwgTJg7uz8KUGdXRdGKE0W_jN&index=4
