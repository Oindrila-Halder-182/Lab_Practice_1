#include <iostream>
using namespace std;

class Smartphone
{
public:
    virtual void takeSelfie() = 0;
    virtual void makeCall() = 0;
    virtual ~Smartphone() {}
};

class Android : public Smartphone
{
public:
    void takeSelfie()
    {
        cout << "Android takes a selfie with AI beauty mode." << endl;
    }

    void makeCall()
    {
        cout << "Making a call using Android phone." << endl;
    }
};

class IPhone : public Smartphone
{
public:
    void takeSelfie()
    {
        cout << "iPhone takes a portrait selfie." << endl;
    }

    void makeCall()
    {
        cout << "Making a FaceTime audio call using iPhone." << endl;
    }
};

int main()
{
    Smartphone* phone;

    phone = new Android();
    phone->takeSelfie();
    phone->makeCall();
    delete phone;

    cout << endl;

    phone = new IPhone();
    phone->takeSelfie();
    phone->makeCall();
    delete phone;

    return 0;
}