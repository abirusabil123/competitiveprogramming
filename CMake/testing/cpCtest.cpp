#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream expectedOutput("../testing/expectedOutput.txt");
    ifstream output("../output.txt");
    
    int result = 0;
    
    while (true) {
        string line1, line2;
        getline(expectedOutput, line1);
        getline(output, line2);
        
        if (line1 != line2) {
            cout << line1 << " not same as " << line2 << endl;
            result = 1;
            break;
        }
        
        if (!output && !expectedOutput) {
            break;
        } else if (!output || !expectedOutput) {
            cout<< "Different number of lines." << endl;
            result = 1;
            break;
        }
    }
    
    output.close();
    expectedOutput.close();
    
    return result;
}