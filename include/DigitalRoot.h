#ifndef DIGITALROOT_H
#define DIGITALROOT_H

class DigitalRoot
{
    public:
        DigitalRoot();
        DigitalRoot(int n);
        virtual ~DigitalRoot();
        int getRootValue();
    protected:

    private:
        int N;
        int askForN();
        int getDigitalRoot();
        bool validateInput(int n);
};

#endif // DIGITALROOT_H
