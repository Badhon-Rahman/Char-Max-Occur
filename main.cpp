#include <iostream>

using namespace std;

void MaxOccurChar(char str[], int arrSize){
         int tempChar, maxChar = 1;
         char ch, ch2;

         for(int i = 0; i < arrSize; i++){
            str[i] = tolower(str[i]);
         }

         for(int i = 0; i < arrSize; i++){
            tempChar = 1;
            for(int j = i + 1; j < arrSize; j++){
                if(str[i] == str[j]){
                    tempChar++;
                }
            }
            if(tempChar > maxChar){
              ch = str[i];
              ch2 = NULL;
              maxChar = tempChar;
            }
            else if(tempChar == maxChar){
               ch2 = str[i];
            }
         }

         if(maxChar == 1){
            cout << "All character occur at most once." << endl;
         }
         else if(ch2 == NULL){
              cout << ch << " occur max: " << maxChar << " times." << endl;
         }
         else{
            cout << ch << " and " << ch2 << " occur max: " << maxChar << " times." << endl;
         }
}

int main()
{
    int arrSize;
    cout << "Enter the array size:";
    cin >> arrSize;

    char str[100];
    cout << "Enter the characters: ";
    for(int i = 0; i < arrSize; i++){
        cin >> str[i];
    }

    MaxOccurChar(str, arrSize);
    return 0;
}
