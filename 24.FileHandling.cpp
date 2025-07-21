/*
📁 File Handling in C++ (Important Notes)

 What is File Handling?
File Handling in C++ allows you to store data permanently in files (like .txt, .csv) and read/write data from those files.

C++ provides fstream library with 3 classes:
| Class      | Purpose                     |
| ---------- | --------------------------- |
| `ifstream` | Input File Stream (Read)    |
| `ofstream` | Output File Stream (Write)  |
| `fstream`  | Input + Output (Read/Write) |


🧠 Tips
Always check with file.is_open() after opening.

Always file.close() when done.

If file doesn't exist while reading → it will fail to open.

If file doesn't exist while writing → it will create one.


// Opening and reading a file

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream file("example.txt"); 
    string line;

    if (file.is_open()) {
        while (getline(file, line)) {
            cout << line << endl;
        }
        file.close();
    } else {
        cout << "Failed to open file!";
    }

    return 0;
}


// Open and Write to a File


#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream file("example.txt");  // Open in write mode

    if (file.is_open()) {
        file << "C++ File Handling";
        file.close();  // Always close the file
    } else {
        cout << "Error opening file!";
    }

    return 0;
}

*/



/*
More way to open file for reading/writing purpose

fstream file("filename with extension",mode)

| Mode          | Meaning                      |
| ------------- | ---------------------------- |
| `ios::in`     | Open for reading             |
| `ios::out`    | Open for writing             |
| `ios::app`    | Append to end                |
| `ios::trunc`  | Delete contents before write |
| `ios::binary` | Open in binary mode          |


ofstream fout;   here fout is obj of ofstream class.
fout.open("data.txt", ios::app);  // opening file for writing.( Append mode)

ifstream fin;  here fin is obj of ofstream class.
fin.open("data.txt", ios::app); //opening file for reading.

*/