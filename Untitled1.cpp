#include <iostream>
#include <string>

using namespace std;

int problem1();
    {
        int T, H;
        float C;
        int Grade;

        cout << "Enter Hardness: " << endl;
        cin >> H;
        cout << "Enter Carbon content: " << endl;
        cin >> C;
        cout << "Enter Tensile strength: " <<endl;
        cin >> T;

        if ( (H > 50) && (C < 0.7) && (T > 5600) )
        {
            Grade = 10;
        }
        else if ( (H > 50) && (C < 0.7) )
        {
            Grade = 9;
        }
        else if ( (C < 0.7) && (T > 5600) )
        {
            Grade = 8;
        }
        else if ( (H > 50) && (T > 5600) )
        {
            Grade = 7;
        }
        else if ( (H > 50) || (C < 0.7) || (T > 5600) )
        {
            Grade = 6;
        }
        else
        {
            Grade = 5;
        }
        cout << Grade << endl;
        return Grade
    }

int main()
{

    return 0;

}
