/* http://HelloACM.com */
#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <fstream>
#include <string>
using namespace std;

const unsigned char BLACK = 219;

int main()
{
    int w = 0;
    int w0 = 0;
    int width0 ;
    int heigth0 ;
    int te_n ;
    int colorint;
    string url;
    string color;
    
    cout << "width" << endl;
    cin >> width0 ;
    cout << "heigth" << endl;
    cin >> heigth0;
    cout << "temp" << endl;
    cin >> te_n;
    cout << "url du color" << endl;
    cin >> url;

    for (int te = 0; te <= te_n; te++) {
        ifstream myfile(url);
        

        if (myfile.is_open())
        {




            HDC hdc = GetDC(NULL); // hWnd is your application handle!! do not ommit it!

            for (w = 0; w <= width0; w++) {

                for (int h = 0; h <= heigth0; h++) {
                    for (int c = 0; c <= 0; c++) {
                        getline(myfile, color);
                        colorint = stoi(color);
                        
                        SetPixel(hdc, w, h, colorint); // plot a red pixel at position 5, 5
                    }
                }
            }






        }

        else { cout << "Unable to open file"; }
        myfile.close();
       
    }
    system("PAUSE");
    return 0;
}