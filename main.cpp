#include <iostream>
#include <string>
#include "DigitalRoot.h"

using namespace std;

int main()
{
    do{
        DigitalRoot object (174);
        int result = object.getRootValue();

        if(result > 0)
            cout << "Digital Root = " << result << endl;
        else
            cout << "Invalid input" << endl;

        cout << "" << endl;
    }while(true);

    return 0;
}
