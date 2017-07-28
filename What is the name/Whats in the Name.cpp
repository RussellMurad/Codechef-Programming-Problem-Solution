#include <bits/stdc++.h>
using namespace std;

int main()
{
    int X,space=0,First=0,Last=0,Index=0,Size=0;
    string str;
    char Result[999];

    cin >> X;
    cin.ignore();

    while(X--)
    {

        getline(cin,str);
        Size=0;
        Index=0;
        First=0;

        for(int i=0; i<str.size(); i++)
        {
            if(str[i] == ' ')
            {
                space++;

            }
        }

        if(space == 0)
        {
            for(int i=0; i<str.size(); i++)
            {
                if(i == First)
                {
                    Result[Index++] = toupper(str[i]);
                    Size++;
                }

                else {
                    Result[Index++] = tolower(str[i]);
                    Size++;
                }
            }
        }

        else {

            for(int i=0; i<str.size(); i++)
            {
                if(str[i] == ' ' && space != 0)
                {
                    Result[Index++] = toupper(str[First]);
                    Result[Index++] = '.';
                    Result[Index++] = ' ';
                    Size += 3;
                    First = i+1;
                    space--;
                }

                else if(space == 0)
                {
                    if(i == First)
                    {
                        Result[Index++] = toupper(str[i]);
                        Size++;
                    }

                    else {
                        Result[Index++] = tolower(str[i]);
                        Size++;
                    }
                }
            }
        }

        for(int i=0; i<Size; i++)
        {
            cout << Result[i];
        }
        cout << endl;
    }
    return 0;
}
